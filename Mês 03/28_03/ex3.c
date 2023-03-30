#include <stdio.h>
#include <stdlib.h>

float porcentagem(float t, float p){
    return (t/100.0)*p;
}

int main()
{
    float total, porc;
    printf("Digite o valor total: ");
    scanf("%f", &total);
    printf("Digite a porcentagem: ");
    scanf("%f", &porc);
    float x = porcentagem(total, porc);
    printf("%.2f%% de %.2f = %.2f", porc, total, x);
    return 0;
}
