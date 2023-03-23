#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n;
    printf("Digite o numero que deseja a tabuda: ");
    scanf("%i", &num);
    printf("Digite ate que numero deseja que a tabuda va: ");
    scanf("%i", &n);

    for(int i = 0; i <= n; i++)
        printf("%i x %i = %i\n", num, i, num*i);
    return 0;
}
