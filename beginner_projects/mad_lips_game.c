#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[50];
  int age;
  char city[70];
   char occupation[80];

  printf("Enter your character's name: ");
  scanf("%s", name);
  printf("Enter your character's age:");
  scanf("%d", &age);
  printf("Enter your character's dream city:");
  scanf("%s", city);
  printf("Enter your character's dream occupation:");
  scanf("%s", occupation);

printf("Once upon a time, in a very far place, there lived a girl called %s\n", name);
printf(name, "is %d years old.\n", age);
printf("Though she grew up in a small town, yet she had big dreams of moving to %s\n", city);
printf("When she relocates to her dream city, she will become a %s\n", occupation);
return 0;
}
