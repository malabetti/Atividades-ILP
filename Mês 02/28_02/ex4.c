#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[128];
    int idade;

    printf("Seu nome: ");
    setbuf(stdin, NULL);
    gets(nome);

    printf("Sua idade: ");
    scanf("%i", &idade);

    printf("\nNome: %s", nome);
    printf("\nIdade: %i", idade);

    return 0;
}
