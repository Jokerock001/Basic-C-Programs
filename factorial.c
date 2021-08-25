#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter any number:");
scanf("%d",&a);
b=1;
c=1;
while(b<=a);
{
c*=b;
b++;
}
printf("\n The factorial value is %d",c);
getch();
}
