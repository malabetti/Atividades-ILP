#include <stdio.h>
#include <stdlib.h>

int calcularDelta(int a, int b, int c){
    return ((b*b)-4*a*c);
}

int main()
{
    int b, a, c;
    printf("Digite o valor de b: ");
    scanf("%i", &b);
    printf("Digite o valor de a: ");
    scanf("%i", &a);
    printf("Digite o valor de c: ");
    scanf("%i", &c);
    int x = calcularDelta(a, b, c);
    printf("Valor de Delta = %i\n", x);
    return 0;
}
