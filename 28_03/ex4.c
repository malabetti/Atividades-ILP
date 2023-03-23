#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numeroPrimo(int n){
    int cont = 0;
    for(int i = n-1; i >= 1; i--)
        if(!(n%i)) cont++;
        if(cont > 1) return 2;
    return 1;
}

int main()
{
    setlocale(LC_ALL, "");
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    int primo = numeroPrimo(n);
    if(primo == 1) printf("É primo\n");
    else printf("Não é primo\n");
    return 0;
}
