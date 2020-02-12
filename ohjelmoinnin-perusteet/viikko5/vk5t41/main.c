#include <stdio.h>
#include <stdlib.h>

char str[20];

int main()

{
    int kokonaisluku=atoi(str);
    double desimaaliluku=atof(str);
    float summa=0;

    printf("kirjoita kokonaisluku\n");
    scanf("%d",&kokonaisluku);
    printf("kirjoita desimaaliluku\n");
    scanf("%lf",&desimaaliluku);
    summa=kokonaisluku+desimaaliluku;
    printf("summa %f\n",summa);
    return 0;

}
