#include <stdio.h>
#include <string.h>
#include <windows.h>

дһ����������������һ���ַ���������
void reverse(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;//strlen()�Ǽ����ַ������ȵĺ���
	while (left < right) {//���������ߵ�ֵ�����ڵݽ�
		char temp = *left;//����һ����ʱ���������ߵ�ֵ
		*left = *right;
		*right = temp;
		left++, right--;
	}
}

int main()
{
	char arr[] = "Hello world";//����һ���ַ���
	printf("Before:%s\n", arr);//����֮ǰ
	reverse(arr);//���ַ�������
	printf("After :%s\n", arr);//����֮��
	system("pause");
	return 0;
}

��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

���磺2 + 22 + 222 + 2222 + 22222


int main()
{
	printf("������������");
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
���0��100000֮������С�ˮ�ɻ������������

��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1. i�Ǽ�λ��
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//2. i��ÿһλ��λ���η���
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3. �ж�
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
��C��������Ļ���������ͼ����


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

�ȿ�������
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
�������
int main(int argc, char* argv[], char* envp[])
{
	int arr[20][20] = { 0 };
	arr[0][0] = 1;

	int n = 0;
	scanf("%d", &n);

	//��
	for (int i = 1; i < n; i++)
	{
		//��
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

5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������



Aѡ��˵��B�ڶ����ҵ�����

Bѡ��˵���ҵڶ���E���ģ�

Cѡ��˵���ҵ�һ��D�ڶ���

Dѡ��˵��C����ҵ�����

Eѡ��˵���ҵ��ģ�A��һ��

����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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