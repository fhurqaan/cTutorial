# include "stdio.h"
void main(void) {
	int i, tab=2;
	for(i=1; i<13; i++) {
		printf("%2d x %2d = %2d\n", tab, i, i*tab);
	}
}
