#include <stdio.h>
#include <stdlib.h>

int main()
{
 const char name[50];
 const int age;
 const char city[70];
  const char occupation[80];

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
printf("Though she grew up in a small town,", name, "had big dreams of moving to %s\n", city);
printf("When", name, "relocates to", city, "she will become a %s\n", occupation);
return 0;
}