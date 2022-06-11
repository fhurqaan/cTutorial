#include "stdio.h"
void main(void) {
	int fact=1, count;
	for(count=2; count <11; count++) {
		fact*=count;
	}
	printf("%d\n", fact);
}
