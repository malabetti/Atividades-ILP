#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int m[5][5], existencia = 0;

void cad(){
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++){
            printf("Digite o valor [%i][%i]: ", i, j);
            scanf("%i", &m[i][j]);
        }
    return;
}

void mostra(){
    for(int i = 0; i < 5; i++){
        printf("\n[\t");
        for(int j = 0; j < 5; j++){
            printf("%i\t", m[i][j]);
        }
        printf("]");
    }
    return;
}

int busca(int valor){
    int p = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(m[i][j] == valor){
                printf("\nO valor está na posição: [%i][%i]\n", i, j);
                p = 1;
            }
        }
    }
    return p;
}

int main()
{
    setlocale(LC_ALL, "");
    int o, p, i, j;
    do{
        printf("\n1. Cadastrar valores na Matriz\n");
        printf("2. Mostrar Matriz\n");
        printf("3. Buscar valor dentro da matriz\n");
        printf("4. Alterar valor em uma posição da matriz\n");
        printf("5. Sair\n");

        printf("Digite a opção desejada: ");
        scanf("%i", &o);

        switch(o){
            case 1:
                cad();
                existencia = 1;
                printf("\nMatriz cadastrada!\n");
                break;
            case 2:
                if(!existencia) printf("\nCadastre uma matriz!\n");
                else
                    mostra();
                break;
            case 3:
                if(!existencia) printf("\nCadastre uma matriz!\n");
                else{
                    printf("Digite um valor para buscar: ");
                    scanf("%i", &p);
                    p = busca(p);
                    if(!p) printf("\nValor não encontrado!\n");
                }
                break;
            case 4:
                if(!existencia) printf("\nCadastre uma matriz!\n");
                else{
                    printf("Digite a posição em que deseja alterar (i j): ");
                    scanf("%i %i", &i, &j);
                    printf("Digite o valor que deseja cadastrar: ");
                    scanf("%i", &p);
                    m[i][j] = p;
                    printf("\nValor alterado!\n");
                }
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
                break;
        }
    }while(o != 5);
    return 0;
}
