#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maxn 30

int m[maxn][maxn];
int cont[10], modas[10], mpos = 0;

void conta(){
    for(int i = 0; i < maxn; i++)
        for(int j = 0; j < maxn; j++)
            cont[m[i][j]]++;
    return;
}

int apareceMais(){
    int maior = cont[0];
    for(int i = 1; i < 10; i++)
        if(cont[i] > maior) maior = cont[i];
    return maior;
}

void detectModa(int maior){
    for(int i = 0; i < 10; i++){
        if(maior == cont[i]){
            modas[mpos] = i;
            mpos++;
        }
    }
    return;
}

int main()
{
    srand(time(0));

    for(int i = 0; i < maxn; i++)
        for(int j = 0; j < maxn; j++)
            m[i][j] = rand()%10;

    for(int i = 0; i < 10; i++)
        modas[i] = 0;

    conta();
    int maior = apareceMais();
    detectModa(maior);

    printf("\nModa = { ");
    for(int i = 0; i < mpos; i++)
        printf("%i ", modas[i]);
    printf("}\n");

    for(int i = 0; i < 10; i++)
        printf("%i : %i vezes\n", i, cont[i]);
    return 0;
}
