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
int main(void)
{
    unsigned int x;
    for (x = 1; x <= 10; ++x)
    {
        if (x == 5)
        {
            break;
        }
        printf("%u ", x);
    }
    printf("\n於x==%u跳出迴圈\n", x);
    return 0;
}
