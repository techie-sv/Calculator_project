#include <stdio.h>

int main(){
char operator; 
double num1;
double num2;
double result;

printf("\nenter an operator (+,-,*,/):");
scanf("%c",&operator);

printf("enter number 1:");
scanf("%lf",&num1);

printf("enter number 2:");
scanf("%lf", &num2);

switch (operator)
{
case '+':
   result = num1 + num2;
   printf("\n result:%lf", result);
   break;
case '-':
   result = num1 - num2;
   printf("\n result:%lf", result);
   break;
case '*':
   result = num1 * num2;
   printf("\n result:%lf", result);
   break;
case '/':
   result = num1 / num2;
   printf("\n result:%lf", result);
   break;
default:
   printf("%c is not vsalid", operator);
}
return 0;
}
