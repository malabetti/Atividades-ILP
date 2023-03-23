#include <stdio.h>

float cerca(float altura, float base){
    return (base*2)+(altura*2);
}
float grama(float altura, float base){
    return base*altura;
}

int main(void){
    float base, altura;
    printf("\nDigite a base e a altura do retangulo do terreno (m): ");
    scanf("%f %f", &base, &altura);

    printf("Quantidade de metros lineares de cerca: %.2f\n", cerca(altura, base));
    printf("Quantidade de metros quadrados de grama: %.2f\n", grama(altura, base));

    return 0;
}