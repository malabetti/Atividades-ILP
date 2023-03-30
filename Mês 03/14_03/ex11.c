#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n, tabuada;
    printf("Digite o numero que deseja a tabuda: ");
    scanf("%i", &num);
    printf("Digite ate que numero deseja que a tabuda va: ");
    scanf("%i", &n);
    printf("Digite quantas vezes quer que a tabuada seja feita: ");
    scanf("%i", &tabuada);

    for(int i = 0; i < tabuada; i++){
        for(int j = 0; j < 20; j++) printf("-");
        for(int i = 0; i <= n; i++)
            printf("\n%i x %i = %i", num, i, num*i);
        printf("\n");
    }
    return 0;
}
