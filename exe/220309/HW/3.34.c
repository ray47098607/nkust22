#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    int c = 0;
    for (a = 0; a < 11; a++)
    {
        for (b = 0; b < a; b++)
        {
            c = c + 1;
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}
