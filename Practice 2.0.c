#include <stdio.h>

int main() {
    double num1,num2,result;
char choice;
printf("Enter 2 value :\n");
scanf("%lf %lf",&num1,&num2);

printf("Enter a Operator.\n");
printf("+.Addition.\n");
printf("-.Sutraction.\n");
printf("*.Multiplication.\n");
printf("/.Divition.\n");
scanf(" %c",&choice);

switch(choice)
{
case '+':
      result=num1+num2;
     break;
case '-':
   result=num1-num2;
     break;
case '*':
       result=num1*num2;
     break;
case '/':
     result=num1/num2;
     break;
default:
   printf("Invalid input");
     break;
}
printf("Result : %lf",result);

    return 0;
}
