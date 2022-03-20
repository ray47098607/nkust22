#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, a;
    printf("輸入正整數\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("負數沒有階乘！\n");
    }
    else
    {
        printf("%d!=", n);
        for (i = 1; i < n; i++)
        {
            a = a * i;

            printf("%d*", i);
        }
        printf("%d", n);
        printf("\n%d的階乘為%d\n", n, a);
    }
    return 0;
}