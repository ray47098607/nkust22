#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, o;
    int a1, a2, a3, a4, a5;
    printf("輸入2進制5位數以下");
    scanf("%d", &i);
    a1 = i % 10;
    a2 = i % 100;
    a3 = i % 1000;
    a4 = i % 10000;
    a5 = i / 10000;
    o = a1 * 1 + a2 * 2 + a3 * 4 + a4 * 8 + a5 * 16;
    printf("%d", o);
    return 0;
}
