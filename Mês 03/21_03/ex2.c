#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%i", &n);

    float notas1[n], notas2[n], media[n];

    for(int i = 0; i < n; i++){
        printf("Digite as notas 1 e 2 do aluno %i: ", i+1);
        scanf("%f %f", &notas1[i], &notas2[i]);
        media[i] = (notas1[i]+notas2[i])/2.0;
    }
    for(int i = 0; i < n; i++){
        printf("\nAluno %i:\n", i+1);
        printf("Nota 1: %.2f, Nota 2: %.2f\n", notas1[i], notas2[i]);
        printf("Media: %.2f\n", media[i]);
    }

    return 0;
}
