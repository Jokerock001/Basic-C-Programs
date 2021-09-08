#include<stdio.h>
#include<conio.h>
void main()
{
  long int a,b,c,d;
  clrscr();
  printf("\n Enter any number:");
  scanf("%d",&a);
  printf("\n Enter the number to find position:");
  scanf("%d",&b);
  d=0;
  do
  {
    c=a%10;
    a/=10;
    d++;
  }
  while(b!=c);
  printf("\n The position from the last is %d",d);
  getch();
}
