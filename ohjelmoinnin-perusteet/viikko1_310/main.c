#include <stdio.h>

int main()
{
    int numero;
    printf("kirjoita salainen numero\n");
    scanf("%d",&numero);
    if (numero == 17)
    {
        printf("gz!\n");
    }
    else
    {
        printf("aina ei onnistu...\n");
        main();
    }
    return 0;
}
