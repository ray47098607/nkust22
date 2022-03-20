#include <stdio.h>
int main()
{
    int f = 1;
    int i, j, k, a;
    if (f == 0)
    {
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5 - i; j++)
            {
                printf(" ");
            }
            for (k = 0; k < i * 2 + 1; k++)
            {
                printf("*");
            }
            print("\n");
        }
    }
    else
    {
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (a = 0; a < 9 - i * 2; a++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
return 0;