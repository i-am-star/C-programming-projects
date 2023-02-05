//just like the if statement, the switch statement allows us to check if diffrent conditions are true or false, and then executes the statement if they are true.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// A program that determines the outcome of a grade

int main()
{

    char grade;
    printf("Enter your grade (Ensure to put only capital letters):");
    scanf(" %c", &grade);

 switch(grade){
case 'A' :
    printf("Your grade is %c. Excellent!!\n", grade);
    break;
    case 'B' :
    printf("Your grade is %c.  Very good!!\n", grade);
    break;
    case 'C' :
    printf("Your grade is %c. Good\n", grade);
    break;
    case 'D' :
    printf("Your grade is %c. Fair", grade);
    break;
    case 'E' :
    printf("Your grade is %c. Pass", grade);
    break;
    case 'F' :
    printf("Your grade is %c. Fail", grade);
    break;
    default:
        printf("Your grade should be uppercase letters ranging from A-F");
    }
    return 0;
}
