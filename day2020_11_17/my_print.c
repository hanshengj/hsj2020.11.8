#include<stdio.h>

void my_print(int n)

{
	int i = 0;
	printf(" ��ӡ����λ\n");
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("��ӡż��λ\n");
	for (i = 31; i >= 1; i = i - 2)
	{
		printf("%d ", (n >> i) & 1);
	}

}
int main()
{
	int num = 0;
	int count = 0;
	printf("������һ������");
	scanf("%d", &num);
	my_print(num);
	return 0;
}