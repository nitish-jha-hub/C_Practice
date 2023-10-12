#include <stdio.h>
#include <conio.h>
int main(){
int first_no = 51;
//float first_no = 51;

int second_no = 25;
//float second_no = 25;
int sum = first_no + second_no;
int multi = first_no * second_no;
int subs = first_no - second_no;

//try typecasting in c
float div;
//div = float(first_no)/float(second_no);
div = first_no/second_no;
// clrscr();
printf("the sum of two number is =%d \n", sum);
printf("multiplication is =%d \n", multi);
printf("substraction is =%d \n", subs);
printf("division is =%f \n", div);

getch();
return 0;
}