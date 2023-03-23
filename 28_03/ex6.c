#include <stdio.h>
#include <stdlib.h>

int menor(int v[], int n){
    int menor = v[0];
    for(int i = 1; i < n; i++)
        if(v[i] < menor) menor = v[i];
    return menor;
}

int main()
{
    int n;
    printf("Tamanho do vetor: ");
    scanf("%i", &n);
    int v[n];
    for(int  i = 0; i < n; i++){
        printf("v[%i]: ", i);
        scanf("%i", &v[i]);
    }
    printf("Menor valor: %i\n", menor(v, n));
    return 0;
}
