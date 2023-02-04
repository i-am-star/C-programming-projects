#include <stdio.h>
#include <stdlib.h>

int main()
{
double Num1;
double Num2;
double result = Num1 + Num2;
printf("Enter a number:\n");
scanf("%lf", &Num1);
printf("Enter a second number:\n");
scanf("%lf", &Num2);
printf("Answer: %f", Num1 + Num2);
return 0;
}