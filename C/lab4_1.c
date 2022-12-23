#include <stdio.h>
#include "math.h"
#include "stdlib.h"

void main()
{
    int n, a, b, cnt = 1;
    float i, f, mn, mx;

    printf("Введите A, B, N\n");
    scanf("%i%i%i", &a, &b, &n);
    printf("\nИсходные данные:\nn = %2i, A = %3i, B = %3i\n", n, a, b);
    
    mn = sin((2 + (a + 3) / 2.) / (5 * a * a + 3 * (a + 3)));
    mx = sin((2 + (b + 3) / 2.) / (5 * b * b + 3 * (b + 3)));

    for(i = a; i < b; i += fabs(a - b) / n )
    {
        f = sin((2 + (i + 3) / 2.) / (5 * i * i + 3 * (i + 3)));
        mn = fmin(mn, f);
        mx = fmax(mx, f);

        printf("x%i = %7.8f y%i = %7.8f\n", cnt, i, cnt, f);
        
        cnt++;
    }

    printf("Результат:\n    Минимум .. ... ... ... ... ... = %8f\n    Максимум . ... ... ... ... ... = %8f", mn, mx);
}