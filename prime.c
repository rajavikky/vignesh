#include <stdio.h>
int main()
{
    int n,i,c=0;
    printf("num");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
       printf("%d",c);     
    }
    return 0;
}
