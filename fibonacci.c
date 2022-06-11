#include "stdio.h"
void main(void)
{	
	int loop, input;
	int lastnum=0, firstnum=1;
	unsigned long int fib=lastnum + firstnum;

	printf("How many fibonacci number to display? ");
	scanf("%d", &input);

	printf("Fibonacci serise for %d iterations : %d, %d, ", input, lastnum, firstnum);

	for(loop=3; loop <=input; ++loop) {
		if(loop!=input) {
			printf("%ld, ", fib);
		}
		else {
			printf("%ld.\n", fib);
		}
		lastnum=firstnum;
		firstnum=fib;
		fib=lastnum+firstnum;
	}
}
