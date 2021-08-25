//swaping two numbers in C
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter any two digit number:");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
printf("%d",b);
a=a/10;
}
getch();
}

