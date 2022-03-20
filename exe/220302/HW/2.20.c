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
    int s0 = 0;
    int hh = 0;
    int mm = 0;
    int ss = 0;

    printf("請輸入秒數\n");
    scanf("%d", &s0);

    hh = s0 / 3600;

    mm = (s0 / 60) % 3600 - (s0 / 3600) * 60;
    ss = s0 % 60;
    printf("%d:%d:%d", hh, mm, ss);
    return 0;
}