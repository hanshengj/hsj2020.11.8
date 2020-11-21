#include <stdio.h>
#include <string.h>
#include <windows.h>

写一个函数，可以逆序一个字符串的内容
void reverse(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;//strlen()是计算字符串长度的函数
	while (left < right) {//交换最两边的值，向内递进
		char temp = *left;//创建一个临时变量存放左边的值
		*left = *right;
		*right = temp;
		left++, right--;
	}
}

int main()
{
	char arr[] = "Hello world";//定义一个字符串
	printf("Before:%s\n", arr);//逆置之前
	reverse(arr);//将字符串逆序
	printf("After :%s\n", arr);//逆置之后
	system("pause");
	return 0;
}

求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，

例如：2 + 22 + 222 + 2222 + 22222


int main()
{
	printf("输入两个整数");
		int a= 0, b= 0;
		scanf("%d%d", &a, &b);
		int total = 0,tn =0;
		for (int i = 0; i < b; i++)
		{
			tn = tn + a;
			total += tn;
			a = a * 10;
		}
		printf("%d", total);
		return 0;
}
求出0～100000之间的所有“水仙花数”并输出。

“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为水仙花数
		//1. i是几位数
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//2. i的每一位的位数次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3. 判断
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
用C语言在屏幕上输出菱形图案：


int main()
{

	for (int x = 1; x < 8; x++) {
		for (int k = 1;k<8-x; k++)
			printf(" ");
		for (int y = 1; y <= 2 * x - 1; y++) {
			
			printf("*");
		}
		printf("\n");
	}

	for (int x = 6; x > 0; x--) {
		for (int k = 1; k < 8 - x; k++)
			printf(" ");

		for (int y = 1; y <= 2 * x - 1; y++) {

			printf("*");
		}
		printf("\n");
	}
}

喝可乐问题
int main()
{
	int money = 20;
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	system("pause");
	return 0;
}
杨辉三角
int main(int argc, char* argv[], char* envp[])
{
	int arr[20][20] = { 0 };
	arr[0][0] = 1;

	int n = 0;
	scanf("%d", &n);

	//行
	for (int i = 1; i < n; i++)
	{
		//列
		arr[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：



A选手说：B第二，我第三；

B选手说：我第二，E第四；

C选手说：我第一，D第二；

D选手说：C最后，我第三；

E选手说：我第四，A第一；

比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int main()
{
	for (int A = 1; A <= 5; A++)
	{
		for (int B = 1; B <= 5; B++)
		{
			for (int C = 1; C <= 5; C++)
			{
				for (int D = 1; D <= 5; D++)
				{
					for (int E = 1; E <= 5; E++)
					{
						if (A * B * C * D * E == 120)
						{
							
							if ((B == 2) + (A == 3) == 1 &&
								(B == 2) + (E == 4) == 1 &&
								(C == 1) + (D == 2) == 1 &&
								(C == 5) + (D == 3) == 1 &&
								(E == 4) + (A == 1) == 1)
							{
								printf("A = %d, B = %d, C = %d, D = %d, E = %d\n", A, B, C, D, E);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}