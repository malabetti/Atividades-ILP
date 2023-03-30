#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Digite tres numeros: ");
    scanf("%i %i %i", &n1, &n2, &n3);

    if(n1 > n2)
        if(n3 > 0)
            for(int i = n1; i >= n2; i-=n3) printf("%i ", i);
        else
            for(int i = n1; i >= n2; i+=n3) printf("%i ", i);
    else
        if(n3 > 0)
            for(int i = n1; i <= n2; i+=n3) printf("%i ", i);
        else
            for(int i = n1; i <= n2; i-=n3) printf("%i ", i);
    return 0;
}
