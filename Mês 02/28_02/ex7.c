#include <stdio.h>

float vista(float preco){
    return preco - (preco * 10/100.0);
}
float prazo(float preco){
    return (preco + (preco * 5/100.0))/3;
}

int main(void){
    float preco;
    printf("Digite o valor do profuto: ");
    scanf("%f", &preco);
    printf("Valor original: %.2f\n", preco);
    printf("Valor a vista: %.2f\n", vista(preco));
    printf("Valor das parcelas a prazo: %.2f\n", prazo(preco));
    return 0;
}