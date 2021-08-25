#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,i;
clrscr();
printf("\n Enter any number:");
scanf("%d",&a);
i=0;
b=1;
c=-1;
while(i<=a)
{
d=b+c;
printf("\n %d",d);
c=b;
b=d;
i++;
}
getch();
}
