#include<stdio.h>
#include<conio.h> //preprosessor
//we only add semicolon to statements not after preprosessor or header
int main()    //main function
{
//int num1=12;
//int num2=15;
int num1;
int num2;
clrscr();
printf("enter num1 = ");
scanf("%d",&num1);
printf("enter num2 =");
scanf("%d",&num2);

if(num1>num2)
{
printf("%d is greater",num1);
}
else {
printf("%d is greater",num2);
}
printf("%x,%x",&num1,&num2); //print memory loation we use %x
//clrscr();    //to clear sreen
//printf("Welcome to C");
getch();     //hold screen wait for 1 key press
return 0;  //send response to os
}
