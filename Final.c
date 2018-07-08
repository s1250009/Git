#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 1000

int main(){
  int name[N],a,b;
  srand((unsigned)time(NULL));
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!",name);
  printf("Rolling the dice...\n");
  a=((rand())%6)+1;
  printf("Die 1: %d\n",a);
  b=((rand())%6)+1;
  printf("Die 2: %d\n",b);
  printf("Total value: %d\n",(a+b));
  if((a+b)>=7){
    printf("%s Won!\n",name);
  }
  else{
    printf("%s Lost...\n",name);
  }
  return 0;
}
