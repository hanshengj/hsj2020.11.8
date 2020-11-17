#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int diff_bit(int m, int n) {
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m, n;
	printf("请输入两个数字： ");

	scanf("%d %d", &m, &n);

	int ret = diff_bit(m, n);

	printf("ret=%d\n", ret);

	system("pause");
	return 0;
}