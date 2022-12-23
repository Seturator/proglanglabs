#include <stdio.h>


void main(){
    int cnt;
    cnt = 0;
    for(int i = 103; i < 568; i++)
        if(i % 5 == 0)
        cnt++;
    printf("%i",cnt);
}