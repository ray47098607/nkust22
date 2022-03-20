/*版本: 1.64.2 (user setup)
日期: 2022-02-09T22:02:28.252Z
電子: 13.5.2
Chromium: 91.0.4472.164
Node.js: 14.16.0
V8: 9.1.269.39-electron.0
作業系統: Windows_NT x64 10.0.19043
版本: 1.65.1 (user setup)
日期: 2022-03-08T02:06:27.846Z
電子: 13.5.2
Chromium: 91.0.4472.164
Node.js: 14.16.0
V8: 9.1.269.39-electron.0
作業系統: Windows_NT x64 10.0.19044
*/

#include <stdio.h>

int main(void)
{
    unsigned int c01;
    int g;
    int t;

    float av;

    t = 0;
    c01 = 0;
    printf("%s", "輸入成績 ,或輸入 -1 結束 ");
    scanf("%d", &g);
    while (g != -1)
    {
        t = t + g;
        c01 = c01 + 1;

        printf("%s", "輸入成績 ,或輸入 -1 結束 ");
        scanf("%d", &g);
    }

if (c01!=0)
{
   av=(float)t/c01;
   printf("班平均:%.2f\n",av);
}else{
    puts("沒有成績");
}

    return 0;
}
