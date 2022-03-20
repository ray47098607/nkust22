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

int main(void)
{
    int u = 0;
    int a = 0;
    int t = 0;

    int v = 0;
    int s = 0;

    printf("輸入初速\n");
    scanf("%d", &u);
    printf("請輸入加速度\n");
    scanf("%d", &a);
    printf("請輸入時間\n");
    scanf("%d", &t);

    v = u + (a * t);
    s = u * t + (a * t * t) / 2;

    printf("最終速度 v = %d \n 經過的距離 s = %d \n ", v, s);
   
    return 0;
}