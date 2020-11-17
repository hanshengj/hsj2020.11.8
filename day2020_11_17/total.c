#include <stdio.h>
int test(int n)
{
    int count = 0;
    while (n != 0) {
        if (n % 2 == 1)
            count++;
        n /= 2;
    }
    return count;
}
int main()
{
    printf("请输入一个整数");
    int n = 0;
    scanf("%d", &n);
    int total = test(n);
    printf("%d", total);
    return 0;
}