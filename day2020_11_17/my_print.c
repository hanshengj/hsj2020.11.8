#include<stdio.h>

void my_print(int n)

{
	int i = 0;
	printf(" 打印奇数位\n");
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("打印偶数位\n");
	for (i = 31; i >= 1; i = i - 2)
	{
		printf("%d ", (n >> i) & 1);
	}

}
int main()
{
	int num = 0;
	int count = 0;
	printf("请输入一个整数");
	scanf("%d", &num);
	my_print(num);
	return 0;
}