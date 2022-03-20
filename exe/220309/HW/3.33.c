#include <stdio.h>

int main(void)
{
    int x;
    printf("輸入邊長\n");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int a = 0; a < x - 2; a++)
    {
        printf("*");
        for (int i = 0; i < x - 2; i++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 0; i < x; i++)
    {
        printf("*");
    }

    return 0;
}
