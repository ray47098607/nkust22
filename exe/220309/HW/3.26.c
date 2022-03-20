#include <stdio.h>
#include <stdlib.h>

//找2大
int main(void)
{
    int I = 0;
    int B1 = 0;
    int B2 = 0;

    printf("請輸入10個不重複的數字\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &I);
        if (I > B1)
        {
            B2 = B1;
            B1 = I;
        }
        else if (I > B2)
        {
            B2 = I;
        }
    }
    printf("最大%d\n", B1);
    printf("次大%d\n", B2);

    return 0;
}
