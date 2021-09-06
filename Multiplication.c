#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\n Enter any number:");
  scanf("%d",&a);
  for(b=1;b<=10;b++)
  {
    c=a*b;
    printf("\n %d*%d=%d",a,b,c);
  }
  getch();
}
