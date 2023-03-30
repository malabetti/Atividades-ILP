#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int m[20][20];

void mostra(){
    for(int i = 0; i < 20; i++){
        printf("\n[  ");
        for(int j = 0; j < 20; j++){
            printf("%i  ", m[i][j]);
        }
        printf("]");
    }
    return;
}

void tse(){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20 - i; j++){
            printf("%i  ", m[i][j]);
        }
        printf("\n");
    }
}

void tsd(){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(j >= i)
                printf("%i  ", m[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
}

void tie(){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j <= i; j++){
            printf("%i  ", m[i][j]);
        }
        printf("\n");
    }
}

void tid(){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(j >= 20 - (i+1))
                printf("%i  ", m[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "");

    for(int i = 0; i < 20; i++)
        for(int j = 0; j < 20; j++)
            m[i][j] = rand() % 10;
    
    int o;
    do{
        printf("\n1. Exibir matriz completa\n");
        printf("2. Exibir triângulo superior esquerdo\n");
        printf("3. Exibir triângulo superior direito\n");
        printf("4. Exibir triângulo inferior esquerdo\n");
        printf("5. Exibir triângulo inferior direito\n");
        printf("6. Sair\n");

        printf("Digite a opção desejada: ");
        scanf("%i", &o);

        switch(o){
            case 1:
                mostra();
                break;
            case 2:
                tse();
                break;
            case 3:
                tsd();
                break;
            case 4:
                tie();
                break;
            case 5:
                tid();
                break;
            case 6:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
                break;
        }
    }while(o != 6);
    return 0;
}