#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

  srand((unsigned int)time(NULL));
  int x,y,z;
  printf("Rolling the dice...\n");
  x=rand()%6+1;
  y=rand()%6+1;
  z=x+y;
  printf("Die 1:%2d\n",x);
  printf("Die 2:%2d\n",y);
  printf("Total value:%2d\n",z);
  if(z>7)printf("You won!\n");
  else printf("You lost!\n");
  return 0;
}
