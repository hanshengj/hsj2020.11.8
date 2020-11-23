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

printf("内存覆盖：%s\n", arr + 2);

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
		pdest++；
		psrc++; 
	}
	return dest;
}



#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
const char* my_strstr(const char* dest, const char* src)
{
	assert(dest);//要查找的串不能为空 
	assert(src);//子串不能为空 
	while (*dest) //从前往后遍历查找串 
	{
		const char *start = dest;//dest,要作为返回值，所以创建一个临时指针存放 
		const char *substart = src;//src，在不完全匹配的情况下要恢复原值 
		while (*start && *substart && *start == *substart)//查找串和子串都不能为空
		//且要两个值相等 
		{
			start++;//两串都往后移，进行下一次比较 
			substart++;
		}
		if (*substart == '\0')//子串为空，且查找串没有越界，则找到了 
		{
			return dest;
		}
		
		dest++;//没找到，查找串继续往后移 
	}
	return NULL;
}

