#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int a,b;
  srand((unsigned)time(NULL));
  printf("Rolling the dice...\n");
  a=((rand())%6)+1;
  printf("Die 1: %d\n",a);
  b=((rand())%6)+1;
  printf("Die 2: %d\n",b);
  printf("Total value: %d\n",(a+b));
  return 0;
}
