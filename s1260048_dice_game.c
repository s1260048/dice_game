#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int dice1,dice2;
  char name[20];
printf("What is your name? \n");
scanf("%s",name);
printf("Hello, %s!\n",name);
printf("Rolleing dice...\n");
  srand((unsigned int)time(NULL));
  dice1 = rand()%6+1;
  dice2 = rand()%6+1;
  total = dice1+dice2;
  printf("dice1 : %s\n",dice1);
  printf("dice2 : %s\n",dice2);
  printf("total : %s",total);
  if(total>7)printf("%s won!",name);
  else printf("%s lost",name);
  
  return 0;
  
}
