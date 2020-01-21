#include <stdio.h>

int main()
{
    float num1, num2, tulos;
    printf("desimaaliluku\n");
    scanf("%f",&num1);
    printf("toinen desimaaliluku\n");
    scanf("%f",&num2);
    tulos = num1 / num2;
    printf("tulos = %.2f\n", tulos);
    return 0;
}
