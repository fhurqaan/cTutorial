#include "stdio.h"
void main(void) {
    int a,b,c;
    for(a=0; a<10; a++) {
      for(b=0; a<b; b++) {
        for(c=0; c<b; c++) {
          printf("%d %d %d",a,b,c);
        }
      }
    }
}
