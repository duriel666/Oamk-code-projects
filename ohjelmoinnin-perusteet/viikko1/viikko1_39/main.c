#include <stdio.h>

int main()
{
    int numero = 0;
    printf("Numero? \n");
    scanf("%d",&numero);
    if (numero < 0)
    {
        printf("miinus\n");
    }
    if (numero > 0)
    {
        printf("plus\n");
    }
}
