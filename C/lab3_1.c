#include <stdio.h>

void main()
{
    int a;
    printf("Введите номер соответсвтующий номеру знака зодиака:\n");
    scanf("%i",&a);
    switch (a)
    {
        case 1:printf("Овен");break;
        case 2:printf("Телец");break;
        case 3:printf("Близнецы");break;
        case 4:printf("Рак");break;
        case 5:printf("Лев");break;
        case 6:printf("Дева");break;
        case 7:printf("Весы");break;
        case 8:printf("Скорпион");break;
        case 9:printf("Стрелец");break;
        case 10:printf("Козерог");break;
        case 11:printf("Водолей");break;
        case 12:printf("Рыбы");break;
        default:printf("Введенный номер не соовтетствует ни одному знаку зодиака.");
    }
}