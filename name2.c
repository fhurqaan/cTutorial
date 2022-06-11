#include "stdio.h"

void main(void) {
	char name[30];
	printf("What is your name :");
	fgets(name, sizeof(name), stdin);
	printf("\nHello, %s!\n",name);
}
