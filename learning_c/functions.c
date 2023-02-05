// a collection of codes that performs a specific task 
#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Simple calculator program\n");
printf("First we do some addition");
addNum();
printf("\n then some subtraction");
subNum();

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
printf("Answer: %d", Num1 + Num2);
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
 printf("Answer:%d", Num1 - Num2);
}
