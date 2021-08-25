#include<stdio.h>
#include<conio.h>
void main()
{
int roll_no,mark1,mark2,mark3,mark4,mark5,total,average;
char name[30];
clrscr();
printf("\n Enter your name:");
scanf("%s",&name);
printf("\n Enter your rollno:");
scanf("%d",&roll_no);
printf("\n Enter your Social Engineering Mark:");
scanf("%d",&mark1);
printf("\n Enter your Phising Mark:");
scanf("%d",&mark2);
printf("\n Enter your Penetration Test Mark:");
scanf("%d",&mark3);
printf("\n Enter your Mark in php:");
scanf("%d",&mark4);
printf("\n Enter your mark in Bash:");
scanf("%d",&mark5);
printf("\n                                    STUDENT MARKSHEET");
printf("\n ----------------------------------------------------------------------------------------");
printf("\n Name: %s",name);
printf("\n Roll_No: %d",roll_no);
printf("\n Mark in Social Engineering: %d",mark1);
printf("\n Mark in Phising: %d",mark2);
printf("\n Mark in Penetration Testing: %d",mark3);
printf("\n Mark in PHP: %d",mark4);
printf("\n Mark in Bash: %d",mark5);
total=mark1+mark2+mark3+mark4+mark5;
average=total/5;
printf("\n Total_Marks: %d",total);
printf("\n Average: %d",average);
getch();
}

