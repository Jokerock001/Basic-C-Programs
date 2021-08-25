#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n Enter any two values:");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("\n The first number is greater than the second number");
}
else
{
printf("\n The second number is greater than the first number");
}
getch();
}
