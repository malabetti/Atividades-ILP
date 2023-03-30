#include <stdio.h>

float media(float p1, float p2, float t1, float t2, float le, float se){
    return (((p1 * 0.6) + (t1 * 0.3) + (le * 0.1)) + ((p2 * 0.5)  + (t2 * 0.3) + (se * 0.2)))/2.0;
}

int main(void){
    float p1, t1, le, p2, t2, se, mediafinal;
    
    printf("Digite a nota de P1: ");
    scanf("%f", &p1);
    printf("Digite a nota de T1: ");
    scanf("%f", &t1);
    printf("Digite a nota de LE: ");
    scanf("%f", &le);
    printf("Digite a nota de P2: ");
    scanf("%f", &p2);
    printf("Digite a nota de T2: ");
    scanf("%f", &t2);
    printf("Digite a nota de SE: ");
    scanf("%f", &se);

    mediafinal = media(p1, p2, t1, t2, le, se);
    printf("\nMedia final: %.2f\n", mediafinal);

    if(mediafinal >= 6) printf("Aprovado!\n");
    else if(mediafinal < 4) printf("Reprovado!\n");
    else{
        float rec;
        printf("Nota da avaliacao final: ");
        scanf("%f", &rec);
        if(rec >= 6) printf("Aprovado na avaliacao final!\n");
        else printf("Reprovado na avaliacao final!\n");
    }
    return 0;
}