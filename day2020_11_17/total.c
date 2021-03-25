//#include <stdio.h>
//int test(int n)
//{
//    int count = 0;
//    while (n != 0) {
//        if (n % 2 == 1)
//            count++;
//        n /= 2;
//    }
//    return count;
//}
//int main()
//{
//    printf("请输入一个整数");
//    int n = 0;
//    scanf("%d", &n);
//    int total = test(n);
//    printf("%d", total);
//    return 0;
//}
#include<stdio,h>
int total(int n)
{
	int total1 = 0;
	while (n)
	{
		if (n % 2 == 0)
			total1++;
		n = n / 2;
	}
	return total1;
}
int main()
{
	printf("请输入一个整数");
		int m = scanf("%d", &m);
		int count =total(m);
		printf("%d", count);
		return 0;

}
void swap(int a, int b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
int print(int n)
{

	//打印奇数位的个数
	for (int i = 30; i >= 0; i = i - 2)
	{
		printf("%d", (n >> i) & 1);
	}
	//打印偶数位
	for (int i = 31; i >= 1; i = i - 2)
		printf("%d", (n >> i) & 1);
}
int totals(int n, int m)
{
	int total = 0;
	int temp = n ^ m;
	while (temp)
	{
		total++;
		temp = temp & (temp - 1);
	}
	return total;
}