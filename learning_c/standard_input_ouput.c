#include <stdio.h>
int main()
{
// Getting input from the user, using the getc() function
   int ch;
printf("Please input a character:\n");
ch = getc(stdin);
printf("The character you entered is: %c\n", ch);
printf("NICEEEE!!!!\n");
//Using getchar() to read input from users
int ch1, ch2;
printf("Type two characters: \n");
ch1 = getchar();
ch2 = getc(stdin);
printf("The first chatacter is: %c\n", ch1);
printf("The second chatacter is :%c \n", ch2);
printf("NICE!!!!\n\n");
   //Outputting a character with putc()
   int cd =65;
   printf("The character that has the numeric value of 65 is:\n");
   putc(cd,  stdout);
   printf("NICEEE!!!!!!");
   //putchar()
   putchar(97);
return 0;
}
