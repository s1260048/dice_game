#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int dice1,dice2,total;
  char name[20];
printf("What is your name? \n");
scanf("%s",name);
printf("Hello, %s!\n",name);
printf("Rolleing dice...\n");
  srand((unsigned int)time(NULL));
  dice1 = rand()%6+1;
  dice2 = rand()%6+1;
  total = dice1+dice2;
  printf("dice1 : %d\n",dice1);
  printf("dice2 : %d\n",dice2);
  printf("total : %d\n",total);
  if(total>7)printf("%s won!\n",name);
  else printf("%s lost\n",name);
  
  return 0;
  
}
