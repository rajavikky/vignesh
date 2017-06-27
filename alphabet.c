#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("enter the alphabet");
scanf("%c",&a);
if(((a>='a')&&(a>='z'))||((a>='A')&&(a>='Z')))
{
printf("character is an alphabet");
}
else
{
printf("character is not an alphabet");
}
getch();
}
