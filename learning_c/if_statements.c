c//An if statement allows you to check wether a given condition is true or false. if it is true, it executes a given command.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// A program that checks which number is greater.

int highestNum(int num1, int num2, int num3);

int main()
{
    printf("The highest number is: %d\n", highestNum(20, 25 , 5));
    return 0;
}

int highestNum(int num1, int num2, int num3)
{
    int result;

    if(num1 > num2 && num1 > num3) {
        result = num1;
    }
    else if (num2 > num1 && num2 > num3){
        result = num2;
    }
    else {
        result = num3;
    }

    return result;
}

