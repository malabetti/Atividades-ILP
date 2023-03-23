#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 17; i >= -5; i--)
        if(!(i%4)) printf("%i ", i);
    return 0;
}
