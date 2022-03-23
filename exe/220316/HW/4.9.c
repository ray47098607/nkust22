/*
版本: 1.65.2 (user setup)
日期: 2022-03-10T14:33:55.248Z
電子: 13.5.2
Chromium: 91.0.4472.164
Node.js: 14.16.0
V8: 9.1.269.39-electron.0
作業系統: Windows_NT x64 10.0.19044
*/
#include <stdio.h>
#include <math.h>
int main(void)
{

    int i = 1;
    int x = 0;
    int sum = 0;
    int y;
    scanf("%d", &x);
  for(i=0,i<x,i++)
    {
        i++;
        scanf(" %d", y);
        sum = sum + y;
    } 

    printf("\n平均%d", sum / x);

    return 0;
}
