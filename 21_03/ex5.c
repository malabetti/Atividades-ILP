#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[3][2], m2[3][2], m3[3][2];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite o valor [%i][%i] da matriz 1: ", i, j);
            scanf("%i", &m1[i][j]);
            printf("Digite o valor [%i][%i] da matriz 2: ", i, j);
            scanf("%i", &m2[i][j]);
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("\nMatriz 1:\n");
    for(int i = 0; i < 3; i++){
        printf("\n[\t");
        for(int j = 0; j < 2; j++){
            printf("%i\t", m1[i][j]);
        }
        printf("]");
    }

    printf("\nMatriz 2:\n");
    for(int i = 0; i < 3; i++){
        printf("\n[\t");
        for(int j = 0; j < 2; j++){
            printf("%i\t", m2[i][j]);
        }
        printf("]");
    }

    printf("\nMatriz 3:\n");
    for(int i = 0; i < 3; i++){
        printf("\n[\t");
        for(int j = 0; j < 2; j++){
            printf("%i\t", m3[i][j]);
        }
        printf("]");
    }
    return 0;
}
