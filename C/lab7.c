#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"

const int n = 10;

void main()
{
    srand(time(0));
    
    int a = 2, b = 9, ar[10], s = 0, p = 1, mn = 10, mx = 0, cnt1 = 0, cnt2 = 1;
    
    printf("Исходные данные:\nn=%i, A=%i, B=%i\n", n, a, b);
    
    for(int i = 0; i < n; i++){
        ar[i] = rand()%b+a;
        
        printf("M[%i]=%i ", i, ar[i]);
        
        if(ar[i] % 2 == 0)
            s += ar[i];
        
        if(ar[i] % 2 != 0)
            p *= ar[i];
        
        mn = fmin(mn, ar[i]);
        mx = fmax(mx, ar[i]);
    }
    
    printf("\nРезультат:\n    Сумма ");
    
    for(int i = 0; i < n; i++){
        if(ar[i] % 2 == 0){
            cnt1 += ar[i];
            
            if(cnt1 == s)
                printf("%i ", ar[i]);
            else
                printf("%i + ", ar[i]);
        }
    }
    
    printf("= %i\n    Произведение ", s);

    for(int i = 0; i < n; i++){
        if(ar[i] % 2 != 0){
            cnt2 *= ar[i];
            
            if(cnt2 == p)
                printf("%i ", ar[i]);
            else
                printf("%i * ", ar[i]);
        }
    }
    
    printf("= %i\n    Минимум ", p);
    
    for(int i = 0; i < n - 1; i++)
        printf("%i ", ar[i]);
    
    printf("%i = %i\n    Максимум ", ar[n-1], mn);
    
    for(int i = 0; i < n - 1; i++)
        printf("%i ", ar[i]);
    
    printf("%i = %i", ar[n-1], mx);
}