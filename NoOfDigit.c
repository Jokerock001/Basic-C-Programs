#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\n Enter any number:");
  scanf("%d",&a);
  b=0;
  while(a!=0)
  {
    a/=10;
    b++;
  }
  printf("\n The number of digits is %d",b);
  getch();
}
