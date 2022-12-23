#include <stdio.h>

void main()
{
    int a;
    printf("Введите номер дня недели:\n");
    scanf("%i",&a);
    switch(a)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        default:printf("Введенный номер не соответсвтует ни одному дню недели.");
    }

}