#include <stdio.h>

float calcula(float valor, int cigarros, int anos){
    return ((cigarros * 365) * anos) * valor;
}

int main(void){
    int cigdia, anos;
    float valor;
    printf("Quantidade de cigarros que fuma por dia: ");
    scanf("%i", &cigdia);
    printf("Fuma por quantos anos: ");
    scanf("%i", &anos);
    printf("Qual o valor do cigarro: ");
    scanf("%f", &valor);
    printf("\nVoce ja gasotou %.2f reais com cigarros!\n", calcula(valor, cigdia, anos));
    return 0;
}