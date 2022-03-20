#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 1;
    float b = 1;
    int i;
    float e = 0;
    for (i = 1; i < 100; i++)
    {
        a = (float)a * i;
        b = b * a;
        e = e + 1 / b;
    }
    printf("e=%8f", e);
    return 0;
}
