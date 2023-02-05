#include <stdio.h>
#include <stdlib.h>

/*int main()
{
double Num1;
double Num2;
double result = Num1 + Num2;
printf("Enter a number:\n"); (first attempt on building a calculator.)
scanf("%lf", &Num1);
printf("Enter a second number:\n");
scanf("%lf", &Num2);
printf("Answer: %f", Num1 + Num2);
return 0;
}*/

int main()
{
    double num1;
    double num2;
    char op;

    printf("This basic calculator accepts only two numbers and accepts only +, /, -, *\n");
    printf("Enter a number:");
    scanf("%lf", &num1);
    printf("Enter an operator:");
    scanf(" %c", &op);
    printf("Enter a number:");
    scanf("%lf", &num2);

if(op == '+'){
    printf("%f + %f = %f", num1, num2, num1 + num2);
}
else if (op == '-'){
   printf("%f + %f = %f", num1, num2, num1 - num2);
}
else if (op == '*'){
     printf("%f + %f = %f", num1, num2, num1 * num2);
}
else if (op == '/'){
   printf("%f + %f = %f", num1, num2, num1 / num2);
}
else {
    printf("please check your operator");
}
    return 0;
}