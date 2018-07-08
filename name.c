#include<stdio.h>

#define N 1000

int main(){
  int name[N];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!",name);
  return 0;
}
