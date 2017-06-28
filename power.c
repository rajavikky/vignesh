#include <stdio.h>
int main()
{
    int base,exponent,resut;
    printf("Enter a base number");
    scanf("%d",&base);
    printf("Enter a exponent");
    scanf("%d",&exponent);
    result=pow(base,exponent);
    printf("%d,%d,%d"base,exponent,result);
    return 0;
}
