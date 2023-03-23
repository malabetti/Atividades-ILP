#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            printf("Digite o valor [%i][%i]: ", i, j);
            scanf("%i", &m[i][j]);
        }

    for(int i = 0; i < 3; i++){
        printf("\n[\t");
        for(int j = 0; j < 3; j++){
            printf("%i\t", m[i][j]);
        }
        printf("]");
    }
    return 0;
}
