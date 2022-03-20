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

// 比較大小

int main(void)
{
    int a = 0;
    int b = 0;

    printf("請輸入2整數以識別\n");
    scanf("%d%d", &a, &b);

    if (a >= b)
    {
        printf("%d大於等於%d\n",a,b);
    }
    
    if (a <= b)
    {
        printf("%d小於等於%d\n",a,b);
    }
    if (a > b)
    {
        printf("%d大於%d\n",a,b);
    }
    if (a < b)
    {
        printf("%d小於%d\n",a,b);
    }
    if (a != b)
    {
        printf("%d不等於%d\n",a,b);
    }
    if (a == b)
    {
        printf("%d等於%d\n",a,b);
    }
   return 0;
}
