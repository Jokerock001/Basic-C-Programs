#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\n Enter any number:");
  scanf("%d",&a);
  while(a!=0)
  {
    b=a%10;
    printf("%d",b);
    a/=10;
  }
  getch();
}
