#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cumprimentar(int h){
    if(h < 0 || h > 23) printf("Valor inválido.\n");
    else if(h < 6) printf("Boa madrugada\n");
    else if(h < 12) printf("Bom dia\n");
    else if(h < 18) printf("Boa tarde\n");
    else printf("Boa noite\n");
    return;
}

int main()
{
    setlocale(LC_ALL, "");
    int hora;
    printf("Digite o horário atual: ");
    scanf("%i", &hora);
    cumprimentar(hora);
    return 0;
}
