#include "stdio.h"
void main(void) {
	int  upto=12, tableno, tablenomax, j;
	printf("enter number between 1 and 50:");
	scanf("%d", &tablenomax);
	for(tableno=1; tableno<=tablenomax; tableno+=3) {
		for(j=1; j<upto+1; j++) {
			printf("%3d x %3d = %3d\t",tableno, j, tableno*j);
			printf("%3d x %3d = %3d\t",tableno+1, j, (tableno+1)*j);
			printf("%3d x %3d = %3d\n",tableno+2, j, (tableno+2)*j);
//			printf("%d x %d = %d\t",tableno+3, j, (tableno+3)*j);
//			printf("%d x %d = %d\n",tableno+4, j, (tableno+4)*j);
		}
	printf("\n");
	}
}
