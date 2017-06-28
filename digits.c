#include <stdio.h>
int main()
{
    long long num;
    int a=0;
    scanf("%lld",&num);
    while(num!=0)
    {
        num=num/10;
    }
    {
        printf("%d",a);
    }
    return 0;
}
