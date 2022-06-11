#include "stdio.h"
void main(void) {
	int  upto=12, tableno=13, j;
	for(tableno=1; tableno<13; tableno+=3) {
		for(j=1; j<upto+1; j++) {
			printf("%d x %d = %d\t",tableno, j, tableno*j);
			printf("%d x %d = %d\t",tableno+1, j, (tableno+1)*j);
			printf("%d x %d = %d\t",tableno+2, j, (tableno+2)*j);
//			printf("%d x %d = %d\t",tableno+3, j, (tableno+3)*j);
//			printf("%d x %d = %d\n",tableno+4, j, (tableno+4)*j);
		}
	printf("\n");
	}
}
