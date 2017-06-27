#include<stdio.h>
int main()
{
int a;
    scanf("%d",&a);
    if((a%4==0)&&(a%400==0))
    {
        if(a%100==0)
        {
            printf("not leap year");
        }
    }
    else
    {
        printf("leap year");
    }
return 0;
}
