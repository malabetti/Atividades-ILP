#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%i", &n1);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%i", &n2);

    int m[n1][n2], soma = 0, prod = 1, maior, menor;
    float media;

    printf("\nDigite os valores da matriz (n�meros negativos tamb�m):\n");
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            printf("Digite o valor [%i][%i]: ", i, j);
            scanf("%i", &m[i][j]);
            if(!i){
                maior = m[i][j];
                menor = m[i][j];
            }
            else{
                if(maior < m[i][j]) maior = m[i][j];
                else if(menor > m[i][j]) menor = m[i][j];
            }
            soma+=m[i][j];
            prod*=m[i][j];
        }
    }
    media = soma/(float)(n1 * n2);

    printf("\n1) o somat�rio dos n�meros da matriz: %i", soma);
    printf("\n2) o produt�rio dos n�meros da matriz: %i", prod);
    printf("\n3) o menor n�mero da matriz: %i", menor);
    printf("\n4) o maior n�mero da matriz: %i", maior);
    printf("\n5) a m�dia dos n�meros da matriz: %.2f", media);
    return 0;
}
