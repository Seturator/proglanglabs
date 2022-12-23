#include <stdio.h>
#include "string.h"

void main() {
    int len = 0;
    char str[19] = {0};

    scanf("%19s",str);
    while(str[len] != 0)
    {
        printf("%c\n", str[len]);
        len++;
    }
}