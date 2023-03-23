#include <stdio.h>
#include <stdlib.h>

#define ano_atual 2023

int main()
{
    int data;
    printf("Digite o ano em que nasceu: ");
    scanf("%i", &data);

    for(int i = data; i <= ano_atual; i++)
        if((!(i%4) && i%100) || !(i%400))
            printf("%i ", i);
    return 0;
}
