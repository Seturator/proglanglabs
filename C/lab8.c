#include "stdio.h"
#include "stdlib.h"
#include "time.h"

const int m = 6, n = 7;

void main() {
    srand(time(0));

    int M[m][n], a = -50, b = 130, cnt;

    printf("Введите a и b\n");
    scanf("%i%i",&a ,&b);
    printf("Исходные данные:\nm = %2i, n = %2i, a = %3i, b = %3i\n", m, n, a, b);


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            M[i][j] = rand()%b+a;
            if(j == m - 1){
                printf("M[%i][%i] = %3i", i, j, M[i][j]);
                break;
            }
            printf("M[%i][%i] = %3i, ", i, j, M[i][j]);
        }
        printf("\n");
    }
    
    printf("Результат обработки:\n    Номера столбцов, содержащих более половины положительных элементов: ");
    
    for(int i = 0; i < m; i++){
        cnt = 0;
        for(int j = 0; j < n; j++){
            if(M[j][i] > 0)
                cnt++;
        }
        if(cnt > m / 2){
            printf("%i ", i + 1);
        }
    }


}