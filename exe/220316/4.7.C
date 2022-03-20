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
    unsigned int aC = 0;
    unsigned int bC = 0;
    unsigned int cC = 0;
    unsigned int dC = 0;
    unsigned int fC = 0;
    puts("輸入成績");
    puts("輸入EOF結束");
    int g;

    while ((g = getchar()) != EOF)
    {
        switch (g)
        {
        case 'A':
        case 'a':
            ++aC;
            break;

        case 'B':
        case 'b':
            ++bC;
            break;

        case 'c':
        case 'C':
            ++cC;
            break;

        case 'D':
        case 'd':
            ++dC;
            break;

        case 'F':
        case 'f':
            ++fC;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            printf("%s", "錯誤格式的成績");
            puts(" 輸入新成績");
            break;
        }
    }
    puts("\n成績總計:");
    printf("A:%u\n", aC);
    printf("B:%u\n", bC);
    printf("C:%u\n", cC);
    printf("D:%u\n", dC);
    printf("F:%u\n", fC);

    return 0;
}
