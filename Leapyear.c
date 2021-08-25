#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\n Enter the year:");
  scanf("%d",&a);
  b=a%4;
  if(b==0)
  {
    printf("\n The given year is a leap year");
  }
  else
  {
    printf("\n The given year is not a leap year");
  }
  getch();
}
