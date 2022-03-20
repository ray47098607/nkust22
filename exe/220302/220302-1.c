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

//加法運算

int main(void)
{
    int i1 = 0;
    int i2 = 0;
    int sum = 0;
    printf("輸入第一數\n");
    scanf("%d", &i1);

    printf("輸入第二數\n");
    scanf("%d", &i2);

    sum = i1 + i2;
    printf("和為%d\n",sum);
   
    return 0;
}
