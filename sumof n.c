#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the numbers:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+1;
        printf("%d",sum);
    }
    return 0;
}
