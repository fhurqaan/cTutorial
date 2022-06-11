#include "stdio.h"
void main(void) {
	int input;
	printf("Enter a number:");
	scanf("%d", &input);
	switch(input) {
		case 1:
			printf("One\n");
		case 2:
			printf("Two\n");
		case 5:
			printf("Five\n");
		default:
			printf("I don't know!\n");
	}

}