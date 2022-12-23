#include<stdio.h>
void main(){
    double s[] = { 3.0, 1.5, 1.4, 3.1, 5.2 }, a;
    int p[10];
    for(int i = 0; i < 10; i++){
        p[i] = 11 + i;
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            a = p[i] * s[j];
            printf("%.1f    ",a);
        }
        printf("\n");
    }
}