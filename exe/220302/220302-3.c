/*
版本: 1.64.2 (user setup)
日期: 2022-02-09T22:02:28.252Z
電子: 13.5.2
Chromium: 91.0.4472.164
Node.js: 14.16.0
V8: 9.1.269.39-electron.0
作業系統: Windows_NT x64 10.0.19044
*/

#include <stdio.h>
#include <stdlib.h>

//乘法表

int main(void)
{
    int a = 1;
    int b = 1;
    int c = 0;
    for (a = 1; a < 10; a++)
    {
        for (b = 1; b < 10; b++)
        {
            c = a * b;
            printf("%d×%d=%d | ", a, b, c);
        }
        printf("\n");
    }
    return 0;
}