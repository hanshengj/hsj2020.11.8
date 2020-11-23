#include<stdio.h>  
#include<stdlib.h>  
#include<assert.h>  
void *my_memmove(void *det, const void *src, int n)
{
void *ret = det;

if ((char*)det <= (char *)src || (char *)det >= (char *)src + n)
{
while (n--)
{
*(char *)det = *(char *)src;
det = (char *)det + 1;
src = (char *)src + 1;
}
}
else
{
det = (char *)det + n - 1;
src = (char *)src + n - 1;
while (n--)
{
*(char *)det = *(char *)src;
det = (char *)det -1;

src = (char *)src - 1;
}
}
return ret;

}
int main()
{
char arr[10] = "abcd";

my_memmove(arr + 2, arr, 4);

printf("�ڴ渲�ǣ�%s\n", arr + 2);

system("pause");
return 0;
}


void *memcpy(void *dest, const void *src, size_t n);

void* my_memcpy(void* dest, const void* src, size_t n)
{
	assert(dest);
	assert(src);
	char* pdest = (char*)dest;
	const char* psrc = (const char*)src;
	while (n--)
	{
		*pdest= *psrc;
		pdest++��
		psrc++; 
	}
	return dest;
}



#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
const char* my_strstr(const char* dest, const char* src)
{
	assert(dest);//Ҫ���ҵĴ�����Ϊ�� 
	assert(src);//�Ӵ�����Ϊ�� 
	while (*dest) //��ǰ����������Ҵ� 
	{
		const char *start = dest;//dest,Ҫ��Ϊ����ֵ�����Դ���һ����ʱָ���� 
		const char *substart = src;//src���ڲ���ȫƥ��������Ҫ�ָ�ԭֵ 
		while (*start && *substart && *start == *substart)//���Ҵ����Ӵ�������Ϊ��
		//��Ҫ����ֵ��� 
		{
			start++;//�����������ƣ�������һ�αȽ� 
			substart++;
		}
		if (*substart == '\0')//�Ӵ�Ϊ�գ��Ҳ��Ҵ�û��Խ�磬���ҵ��� 
		{
			return dest;
		}
		
		dest++;//û�ҵ������Ҵ����������� 
	}
	return NULL;
}

