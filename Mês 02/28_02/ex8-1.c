#include <stdio.h>
#define agora 2023

int main(void){
    int nascimento, anos, meses, dias, minutos, segundos;
    printf("Digite o ano em que nasceu: ");
    scanf("%i", &nascimento);

    anos = agora - nascimento;
    meses = anos * 12;
    dias = meses * 30;
    minutos = (dias * 24) * 60;
    segundos = minutos * 60;

    printf("Voce ja viveu %i anos, %i meses, %i dias, %i minutos, %i segundos.\n", anos, meses, dias, minutos, segundos);

    return 0;
}