#include <stdio.h>

int main(void)
{
    int principal = 0;
    float rate;
    int day = 0;
    float interest = 0;

    while (principal != -1)
    {
        printf("輸入本金(-1結束)\n");
        scanf("%d", &principal);
        if (principal != -1)
        {
            printf("輸入年利率\n");
            scanf("%f", &rate);
            printf("輸入交易期長(日)\n");
            scanf("%d", &day);
            interest = (float)principal * rate * day / 365;
            printf("單利:%.2f\n", interest);
        }
    }

    return 0;
}
