#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter any number:");
scanf("%d",&a);
for(c=0;a!=0;c+=b)
{
b=a%10;
a/=10;
}
printf("\n The sum of the digits is %d",c);
getch();
}
