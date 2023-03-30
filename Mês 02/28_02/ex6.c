#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media = 0.0;
    int ns[5];

    printf("Digite as 5 notas: ");
    for(int i = 0; i < 5; i++){
        scanf("%i", &ns[i]);
        media+=ns[i];
    }
    media /= 5;

    printf("Média dos números %i, %i, %i, %i, %i é %.2f\n", ns[0], ns[1], ns[2], ns[3], ns[4], media);

    if(media >= 6) printf("Aprovado!");
    else if(media >= 4) printf("Reavaliação!");
    else printf("Reprovado!");

    return 0;
}
