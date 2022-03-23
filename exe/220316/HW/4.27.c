#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, count=0;
    printf("500以内的畢氏三元數有：\n");
    printf("  a     b    c      \n");
  
    for(a=1; a<=500; a++)
        for(b=a+1; b<=500; b++)
        {
            c=(int)sqrt(a*a+b*b);  
            if(c*c==a*a+b*b && a+b>c && a+c>b && b+c>a && c<=500)  
            {
                printf("%4d %4d %4d     ", a, b, c);
                count++;
                
                    printf("\n");
            }
        }
   
    printf("\n");
    return 0;
}
