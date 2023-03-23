#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[] = { 6, 3, 4, 2, 11};
    printf("Vetor 1:\n");
    for(int i = 0; i < 5; i++)
        printf("v[%i]: %i\n", i, v[i]);

    int n, v2[5];
    printf("Digite um valor de n: ");
    scanf("%i", &n);
    printf("\nVetor 2:\n");
    for(int i = 0; i < 5; i++){
        v2[i] = n*v[i];
        printf("v2[%i]: %i\n", i, v2[i]);
    }

    int v3[5], j = 0;
    printf("\nVetor 3:\n");
    for(int i = 4; i >= 0; i--){
        v3[j] = v2[i];
        printf("v3[%i]: %i\n", j, v3[j]);
        j++;
    }

    return 0;
}
