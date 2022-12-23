#include <stdio.h>
#include "math.h"

void main(){
    int x = 10;
    double f, p = 1;
    for(int i = 3; i <= 15; i++)
        p *= (log(x*i)/10000)+(1/tan(x));
    f = 4*x*x+p;
    printf("%f",f);
}