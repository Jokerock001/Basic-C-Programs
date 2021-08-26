#include<stdio.h> 
#include<conio.h>
void main()
{
int a;  /*declaring a variable named "a"*/
clrscr();   /*used to clear the screen in the output screen*/
printf("\n Enter any number:");  /*we have to enter any number to check wether the given number is odd or even*/
scanf("%d",&a);  /*getting the values (the entered number) in variable "a"*/
if((a%2)==0)  /*giving condition that if the entered number is divided by 2 and gives the remainder 0 then the condition is true*/
{
printf("\n The given number is a even number");  /*if the above condition is true then this will be the output*/
}
else
{
printf("\n The given number is an odd number");   /*if the above condition is false then this will be the output*/
}
getch();
}
