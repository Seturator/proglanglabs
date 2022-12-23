#include "stdio.h"
#include "math.h"

void main()
{
    int n, c = 0;
    float k = 10,p = 0;
    scanf("%i",&n);
    while (c<n)
    {
        p=p+k;
        k=k+(k*0.1);
        c=c+1;
    }
    printf("p=%f",p);
}