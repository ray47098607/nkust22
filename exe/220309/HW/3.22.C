#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int X = 0;
    int Y = 0;
    printf("輸入一數以辨識是否為質數\n");
    scanf("%d", &X);
    if (X == 1)
    {
        printf("%d不是質數\n", X);
    }
    else if (X == 2)
    {
        printf("%d是質數\n", X);
    }
    else if (X == 3)
    {
        printf("%d是質數\n", X);
    }
    else
    {
        int i;
        for (i = 3; i < X; i++)
        {
            if (X % i == 0)
            {

                printf("%d非質數\n", X);
            }
        }
        if (X == i)
        {
            if (X % i != 0)
            {

                printf("%d是質數\n", X);
            }
        }
    }

    return 0;
}
