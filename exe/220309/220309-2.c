#include <stdio.h>
int main(void)
{
    unsigned int pass = 0;
    unsigned int fail = 0;
    unsigned int student = 1;
    int result;

    while (student <= 10)
    {
        printf("%s", "輸入結果(1=通過,2=沒過):");
        scanf("%d", &result);
        if (result == 1)
        {
            pass = pass + 1;
        }
        else
        {
            fail = fail + 1;
        }
        student=student+1;
    }
printf("通過:%u\n",pass);
printf("沒過:%u\n",fail);
if (pass>8)
{
    printf("bonus to instructor");
}

    return 0;
}
