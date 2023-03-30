#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior(int n1, int n2, int n3){
    if(n1 > n2){
        if(n1 > n3) return n1;
        return n3;
    }
    else{
        if(n2 > n3) return n2;
        return n3;
    }
}

int menor(int n1, int n2, int n3){
    if(n1 < n2){
        if(n1 < n3) return n1;
        else return n3;
    }
    else{
        if(n2 < n3) return n2;
        else return n3;
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3;
    printf("Digite três números: ");
    scanf("%i %i %i", &n1, &n2, &n3);
    printf("Maior número: %i\n", maior(n1, n2, n3));
    printf("Menor número: %i\n", menor(n1, n2, n3));
    return 0;
}
