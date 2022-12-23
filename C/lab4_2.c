#include <stdio.h>
#include "math.h"
#include "stdlib.h"

void main()
{
    int n, cnt = 1;
    float b, f, a, mn, mx, step;
    
    printf("Введите A, B, N\n");
    scanf("%f%f%i", &a, &b, &n);
    printf("\nИсходные данные:\nn = %2i, A = %3f, B = %3f\n", n, a, b);
    
    step = fabs(a - b) / n;
    mn = sqrt(a - 1) * ((sin(fabs(a)) + 2 * cos(fabs(a))) / (8 + 2 * a + 3 * a * a));
    mx = sqrt(b - 1) * ((sin(fabs(b)) + 2 * cos(fabs(b))) / (8 + 2 * b + 3 * b * b));

    while(cnt<=n)
    {
        f=sqrt(a - 1) * ((sin(fabs(a)) + 2 * cos(fabs(a))) / (8 + 2 * a + 3 * a * a));
        mn = fmin(mn, f);
        mx = fmax(mx, f);

        printf("x%i = %7.8f y%i = %7.8f\n", cnt, a, cnt, f);
        
        a += step;
        cnt++;
    }
    printf("Результат:\n    Минимум .. ... ... ... ... ... = %8f\n    Максимум . ... ... ... ... ... = %8f", mn, mx);
}