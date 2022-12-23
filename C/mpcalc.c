#include <stdio.h>

void main()
{
    int ru_new, ru_banned = 975855, euw_old = 53777, euw_new;
    printf("Ru new: ");
    scanf("%i", &ru_new);
    printf("\nEuw new: ");
    scanf("%i", &euw_new);
    printf("\nMP TOTAL: %i", ru_new+ru_banned+euw_new+euw_old);
}
