

/*版本: 1.67.1
提交: da15b6fd3ef856477bf6f4fb29ba1b7af717770d
日期: 2022-05-06T12:37:03.389Z
電子: 17.4.1
Chromium: 98.0.4758.141
Node.js: 16.13.0
V8: 9.8.177.13-electron.0
作業系統: Windows_NT x64 10.0.19044*/
/*
*********************
* filename: game.c  *
* DATE:220604       *
*********************
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct player
{
    /* data */
    //    char name;
    unsigned int number;
    int chips;
};

int main(int argc, char const *argv[])
{
    /* code */
    time_t timer = time(NULL);

    FILE *cflog;

    // FILE *cfoutcome;

    cflog = fopen("gamelog.log", "w");
    fprintf(cflog, "****************************************************************\n");
    fprintf(cflog, "[ctime  %s] open\n", ctime(&timer));

    printf("ctime is %s\n", ctime(&timer));
    unsigned int playercount = 0;

    printf("[ctime  %s ]\u8acb\u8f38\u5165\u4eba\u6578 \n", ctime(&timer));
    scanf("%d", &playercount);
    struct player player[playercount];

    fprintf(cflog, "[ctime  %s ]\u73a9\u5bb6\u4eba\u6578 : %d\n", ctime(&timer), playercount);

    printf("[ctime  %s ]\u73a9\u5bb6\u4eba\u6578 : %d\n", ctime(&timer), playercount);

    unsigned int basechip = 0;
    unsigned int base = 0;

    printf("[ctime  %s ] \u8acb\u8f38\u5165\u5e95\u6ce8\n", ctime(&timer));
    scanf("%d", &base);

    basechip = base * playercount * 100;

    fprintf(cflog, "[ctime  %s ]\u521d\u59cb\u7c4c\u78bc:%d \n", ctime(&timer), basechip);
    fprintf(cflog, "[ctime  %s ]\u5e95\u6ce8:%d \n", ctime(&timer), base);

    printf("[ctime  %s ]\u521d\u59cb\u7c4c\u78bc:%d \n", ctime(&timer), basechip);
    printf("[ctime  %s ]\u5e95\u6ce8:%d \n", ctime(&timer), base);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    struct player mplayer[playercount];

    for (int i = 0; i < playercount - 1; i++)
    {
        mplayer[i].number = i;
        mplayer[i].chips = basechip;
        /*
        printf("[ctime  %s ]\u8acb\u8f38\u5165\u73a9\u5bb6  %d  \u66b1\u7a31 \n", ctime(&timer),i);
        scanf("%c",&mplayer[i].name);
        printf("[ctime %s ] \u73a9\u5bb6   %d   \u66b1\u7a31 \u70ba %c \n", ctime(&timer),i,mplayer[i].name);
        */
        printf("[ctime  %s ]\u73a9\u5bb6 %d \u7c4c\u78bc \u8a2d \u70ba: %d\n", ctime(&timer), mplayer[i].number, mplayer[i].number);
        fprintf(cflog, "[ctime  %s ]\u73a9\u5bb6 %d \u7c4c\u78bc \u8a2d \u70ba %d \n", ctime(&timer), mplayer[i].number, mplayer[i].chips);
    }

    fprintf(cflog, "[ctime  %s ]**************************  \n", ctime(&timer));
    printf("[ctime  %s ]********************** \n", ctime(&timer));
    unsigned int pool = basechip;

    bool end = false;

    while (end == false)
    {
        int p;
        if (p >= playercount)
        {
            p = 0;
        }
        printf("[ctime %s]\u73a9\u5bb6 %d \u7684\u56de\u5408", ctime(&timer), p);
        char Card[3];

        int card[3];

        srand(time(NULL));

        for (size_t i = 0; i < 3; i++)
        {
            card[i] = rand() % (13-0+1)+1;
            if (card[i] == 0)
            {
                Card[i] = 'K';
            }
            else if (card[i] == 1)
            {
                Card[i] = 'A';
            }
            else if (card[i] == 11)
            {
                Card[i] = 'J';
            }
            else if (card[i] == 12)
            {
                Card[i] = 'Q';
            }
            else
            {
                Card[i] = card[i];
            }
        }
        for (size_t i = 0; i < 2; i++)
        {
            printf("[ctime  %s ]card is\n---\n|%c|\n---\n ", ctime(&timer), Card[i]);
            fprintf(cflog, "[ctime  %s ] \u67f1\u724c%d \u70ba%s\n", ctime(&timer), i, Card[i]);
        }
        fprintf(cflog, "[ctime  %s ] \u67f1\u724c%d \u70ba%d\n", ctime(&timer), 2, Card[2]);

        int choice;
        printf("[ctime %s ]\u73a9\u5bb6 %d\u8acb\u9078\u64c7", ctime(&timer), p);
        if (card[0] == card[1])
        {
            printf(" \u4e0a(u)\u4e0b(d)(*2)\u6216 \u649e\u67f1(h)(*5) or endgame(E)");
        }
        else
        {
            printf("  \u649e\u67f1(h)(*5) or (n)(*2) OR ENDGAME (E)");
        }
        
        printf("\n");

        scanf("%d", &choice);

        unsigned int bet;

        fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u9078\u64c7%c\n", ctime(&timer), p, choice);
        if (choice != 'E')
        {
            printf("[ctime %s]\u8acb\u8f38\u5165\u4e0b\u6ce8\u7c4c\u78bc\u5e95\u67f1 %d ALL IN %d\n", ctime(&timer), base, pool);
            scanf("%d", &bet);

            mplayer[p].chips = mplayer[p].chips - bet;
            fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u4e0b\u6ce8bet: %d \u5f8c\u5269\u4e0b\u7c4c\u78bcchips:%d \n", ctime(&timer), p, mplayer[p].chips);
        }
        switch (choice)
        {
        case 'h':
        case 'H':

            if (card[0] == card[2])
            {
                mplayer[p].chips = mplayer[p].chips + bet * 5;
                pool = pool - bet * 4;
                fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 5, mplayer[p].chips, pool);
                printf("[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 5, mplayer[p].chips, pool);
            }
            else if (card[1] == card[2])
            {
                mplayer[p].chips = mplayer[p].chips + bet * 5;
                pool = pool - bet * 4;
                fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 5, mplayer[p].chips, pool);
                printf("[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 5, mplayer[p].chips, pool);
            }
            else
            {
                pool = pool + bet;
                fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                printf("[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
            }

            break;
        case 'U':
        case 'u':

            if (card[0] == card[1] && card[2] > card[0])
            {
                mplayer[p].chips = mplayer[p].chips + bet * 2;
                pool = pool - bet;
                fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 2, mplayer[p].chips, pool);
                printf("[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 2, mplayer[p].chips, pool);
            }
            else
            {
                pool = pool + bet;
                fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                printf("[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
            }
            break;

        case 'D':
        case 'd':
            if (card[0] == card[1] && card[2] < card[0])
            {
                /* code */

                mplayer[p].chips = mplayer[p].chips + bet * 2;
                pool = pool - bet;
                fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 2, mplayer[p].chips, pool);
                printf("[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 2, mplayer[p].chips, pool);
            }
            else
            {
                pool = pool + bet;
                fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
            }

            break;
        case 'e':
        case 'E':
            end = true;
            break;
        default:

            if (card[0] > card[1])
            {
                if (card[1] < card[2])
                {
                    if (card[2] < card[0])
                    {
                        mplayer[p].chips = mplayer[p].chips + bet * 2;
                        pool = pool - bet;
                        fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 2, mplayer[p].chips, pool);
                        printf("[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 2, mplayer[p].chips, pool);
                    }
                    else
                    {
                        pool = pool + bet;
                        fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                        printf("[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                    }
                }
                else
                {
                    pool = pool + bet;
                    fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                    printf("[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                }
            }
            else if (card[0] < card[1])
            {
                if (card[0] < card[2])
                {
                    if (card[2] < card[1])
                    {
                        mplayer[p].chips = mplayer[p].chips + bet * 2;
                        pool = pool - bet;
                        fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 2, mplayer[p].chips, pool);
                        printf("[ctime %s] \u73a9\u5bb6 %d \u7372\u5f97 %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet * 2, mplayer[p].chips, pool);
                    }
                    else
                    {
                        pool = pool + bet;
                        fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                        printf("[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                    }
                }
                else
                {
                    pool = pool + bet;
                    fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                    printf("[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                }
            }
            else
            {
                pool = pool + bet;
                fprintf(cflog, "[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
                printf("[ctime %s] \u73a9\u5bb6 %d \u5931\u53bb %d \u64c1\u6709 %d \u7c4c\u78bc\n\u734e\u6c60\u6709 %d", ctime(&timer), bet, mplayer[p].chips, pool);
            }

            break;
        }
        for (size_t i = 0; i < playercount; i++)
        {
            if (mplayer[i].chips < base)
                end = true;
        }
        if (pool <= 0)
        {
            for (size_t i = 0; i < playercount; i++)
            {
                mplayer[i].chips = mplayer[i].chips - base;
                pool = pool + base;
            }
        }
    }

    fclose(cflog);

    return 0;
}
