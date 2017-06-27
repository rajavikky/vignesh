#include<stdio.h>
#include<conio.h>
void main()
{
char f;
printf("Enter the character");
scanf("%s",&f);
if((f=='a')||(f=='e')||(f=='i')||(f=='o')||(f=='u')||(f=='A')||(f=='E')||(f=='I')||(f=='O')||(f=='U'))
{
printf("given character is vowel");
}
else
{
printf("given character is a consonent");
}
getch();
}
