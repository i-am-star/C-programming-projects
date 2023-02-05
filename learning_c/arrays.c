#include <stdio.h>
#include <stdlib.h>

int main()
{

int privateNum[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,};
printf("%d", privateNum[0]);
printf("%d", privateNum[1]);
printf("%d", privateNum[2]);
privateNum[5] = 2000;
printf("%d\n", privateNum[5]);

int specialNum[20];
specialNum[0] = 10;
specialNum[1] = 20;
specialNum[2] = 30;
specialNum[3] = 40;
specialNum[4] = 50;
specialNum[5] = 60;
printf("%d\n", specialNum[0]);
printf("%d\n", specialNum[1]);


  return 0;
}