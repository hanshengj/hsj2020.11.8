1递归方式实现打印一个整数的每一位
# include <stdio.h>
# include <stdlib.h>
void print (int n)
{
if (n>9)
print(n/10);
printf("%d\n",n %10);

}
int main ()
{
  print (1234);
return 0;
}
2递归实现求n的阶乘
# include <stdio.h>
# include <stdlib.h>
int factorial( int n)
{
	if (n==1)
	return 1 ;
	return n * factorial( n - 1);
}
int main ()
{
	int n = 10 ;
	int result = factorial (n);
	printf ("%d:的阶乘为%d\n",n,result);	
}
3递归分别实现strlen
# include <stdio.h>
# include <stdlib.h>
int strlen ( char *s)
{
	if (*s== 0)
	return 0 ;
	else 
	return strlen ( s + 1) + 1 ;
}
int main ()
{
char s[] = "Hellow,World";
printf ("字符串的长度为%d\n",strlen(s)); 
}
4.斐波那契数列
# include <stdio.h>
int fib( int a);
 int main ()
 {
 
 printf ("%d\n",fib(6));	
  } 
  
  int fib (int n)
  {
  	if ( n <= 2)
  	return 1 ;
  	return fib (n-1) + fib (n - 2);
  }
5.
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
#include <stdio.h>
void reverse_string(char * string)
{
 if(*string ) 
  reverse_string(string + 1);
 else
  return;
 printf ("%c",*string);
}
int main()
{
 char line[80];
 printf("请输入一个字符串:");
 gets (line );
 reverse_string(line);
 return 0;
}
编写一个函数实现n的k次方，使用递归实现。
# include <stdio.h>
int DigitSum( int n,int k)
{
	if (k==0)
	return 1 ;
	if (k == 1)
	return n ;
	return n* DigitSum(n,k-1) ;
}
int main ()
{
	int n = 2;
	int k = 4;
	printf("%d的%d次方为：% d",n,k,DigitSum(n,k)) ;
}