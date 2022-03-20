/*
版本: 1.65.0 (user setup)
日期: 2022-03-02T11:12:08.962Z
電子: 13.5.2
Chromium: 91.0.4472.164
Node.js: 14.16.0
V8: 9.1.269.39-electron.0
作業系統: Windows_NT x64 10.0.19044
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0;
    int o1;
    int o2;
    int o3;
    int o4;
    int o5;
    printf("請輸入五碼數字\n");
    scanf("%d", &input);
    o1 = input / 10000;
    o2 = (input % 10000 - input % 1000) / 1000;
    o3 = (input % 1000 - input % 100) / 100;
    o4 = (input % 100 - input % 10) / 10;
    o5 = input % 10;
    printf("%d   %d   %d   %d   %d", o1, o2, o3, o4, o5);
    return 0;
}