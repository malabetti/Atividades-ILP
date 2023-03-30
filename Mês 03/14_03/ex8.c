#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%i %i", &n1, &n2);

    if(n1 > n2)
        for(int i = n1; i >= n2; i--) printf("%i ", i);
    else
        for(int i = n1; i <= n2; i++) printf("%i ", i);
    return 0;
}
