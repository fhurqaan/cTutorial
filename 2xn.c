#include "stdio.h"
void main(void) {
    int multp=2, mMax=12, mresult, mloop;
    for(mloop=1; mloop<mMax+1; mloop++) {
        mresult=mloop*multp;
        printf("%d x %d = %d\n", multp, mloop, mresult);
    }
}    
