#include <stdio.h>

int lueint();
float luefloat();

int main()
{
    int kokonaisluku;
    float desimaaliluku;

    kokonaisluku=lueint();
    desimaaliluku=luefloat();

    printf("desimaaliluku on %f ja kokonaisluku on %d\n",desimaaliluku,kokonaisluku);
    return 0;
}

int lueint(){
    int kokonaisluku;
    printf("anna kokonaisluku\n");
    scanf("%d",&kokonaisluku);
    return kokonaisluku;
}

float luefloat(){
    float desimaaliluku;
    printf("anna desimaaliluku\n");
    scanf("%f",&desimaaliluku);
    return desimaaliluku;
}
