#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 1;
    float b = 1;
    int i;
    float e = 0;
    float c = 0;
    int x;
    for (i = 1; i < 100; i++)
    {
        a = (float)a * i;
        b = b * a;
        e = e + 1 / b;
    }
    printf("請輸入x");
    scanf("%d", x);
    for (int d = 0; d < x; d++)
    {
        c = c * e;
    }

    printf("e^%d=%8f", x, c);
    return 0;
}
