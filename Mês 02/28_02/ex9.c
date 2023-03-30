#include <stdio.h>

float volume(float h, float r){
    return 3.141592 * r * r * h;
}

int main(void){
    float altura, raio;
    printf("Digite a altura e o raio de um cilindro circular: ");
    scanf("%f %f", &altura, &raio);

    printf("O volume do cilindro: %.2f\n", volume(altura, raio));

    return 0;
}