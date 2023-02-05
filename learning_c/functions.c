// a collection of codes that performs a specific task 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
printf("Simple calculator program\n");
printf("First we do some addition\n");
addNum();
printf("then some subtraction\n");
subNum();
printf("Another addition\n");
addSum(4, 4);
printf("yet another addition\n");
int result = sumNum(6,7);
printf("Result = %d\n", result);
int result1 = timesNum(5,10);
printf("Result =%d", result1) ;
return 0;
}

void addNum()
{
    int Num1;
    int Num2;
    printf("Enter two whole numbers\n");
    printf("Enter the first number:");
scanf("%d", &Num1);
printf("Enter the second number:");
scanf("%d", &Num2);
printf("Answer: %d\n", Num1 + Num2);
}
void subNum()
{
    int Num1;
    int Num2;
    printf("Enter two whole numbers\n");
    printf("Enter the first number:");
    scanf("%d", &Num1);
    printf("Enter the second number:");
    scanf("%d", &Num2);
 printf("Answer:%d\n", Num1 - Num2);
}
//function with parameters
void addSum(int Num1, int Num2)
{
    int result = Num1 + Num2;
    printf("%d + %d = %d\n", Num1, Num2, Num1 + Num2);
}
//functions, parameters, and return types.
int sumNum(int Num1, int Num2)
{
    int sum = Num1 + Num2;
    return sum;
}
/* create a function that takes two numbers, performs the multiplication of two numbers and returns the result*/
int timesNum(int Num3, int Num4)
{
    int sum1 = Num3 * Num4;
    return sum1;
}
