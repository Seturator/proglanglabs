#include <stdio.h>
#include "math.h"

void main()
{
    float a, c, x, y, f;
    printf("Введите x, y, a, c\n");
    scanf("%f%f%f%f", &x, &y, &a, &c);
    f = sqrt(x - 1) * ((sin(fabs(x)) + 2 * cos(fabs(y))) / (8 + 2 * a + 3 * c));
    printf("f = %f", f);
}