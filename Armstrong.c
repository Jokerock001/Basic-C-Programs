#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0,d;
clrscr();
printf("\n Enter any number:");
scanf("%d",&a);
b=a;
while(a!=0)
{
d=a%10;
c=c+(d*d*d);
a/=10;
}
if(c==b)
{
printf("\n The given number is an armstrong number");
}
else
{
printf("\n The given number is not an armstrong number");
}
getch();
}
