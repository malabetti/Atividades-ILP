#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%i", &n);

    int v[n];
    float media = 0;
    for(int  i = 0; i < n; i++){
        printf("Digite o valor [%i]: ", i);
        scanf("%i", &v[i]);
        media += v[i];
    }
    printf("\nMedia dos valores do vetor: %.2f\n", media/(float)n);

    int b, contmul = 0, par = 0, impar = 0;
    printf("Digite um numero para procurar seus multiplos: ");
    scanf("%i", &b);

    for(int  i = 0; i < n; i++){
        if(!(v[i]%b))
            contmul++;
        if(!(v[i]%2))
            par++;
        else
            impar++;
    }
    printf("\nHa %i multiplos de %i no vetor.\n", contmul, b);
    printf("O vetor possui %i numeros pares e %i numeros impares.\n", par, impar);
    return 0;
}
