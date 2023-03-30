#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fat = 1;
    printf("Digite um numero: ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
        fat*=i;

    printf("Fatorial de %i = %i", n, fat);
    return 0;
}
