#include "stdio.h"

void main(void) {
	char name[30];
	printf("What is your name:");
	scanf("%s",name);
	printf("\n\n\nHello, %s\n\n\n",name);
}
