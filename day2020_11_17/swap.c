#include<stdio.h>

int main()
{

	int a, b;
	printf("请输入两个整数");
	scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n", a, b);

	return 0;
}