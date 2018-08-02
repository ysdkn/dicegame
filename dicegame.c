#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int die1=0,die2=0;
  int total=0;

  srand(time(NULL));
  die1 = rand()%6+1;
  die2 = rand()%6+1;
  total = die1 + die2;
  
  printf("Rolling the dice...\n");
  printf("Die 1: %d\nDie 2: %d\n",die1,die2);
  printf("Total value: %d\n",total);

  if(total>7) printf("You won!\n");
  else printf("You lost.\n");

  return 0;
}
