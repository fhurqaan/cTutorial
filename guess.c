#include "stdio.h"

void main(void) {
  int guess;
  printf("Guess my number: ");
  scanf("%d", &guess);
  if(guess!=640230) 
    printf("WRONG!\n");
  else
    printf("You are correct!!\n");
  
}
