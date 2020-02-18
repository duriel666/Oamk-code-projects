#include <stdio.h>
#define KOKO 3

float luvut[KOKO];

void lue(float tau1[]);
void tulosta(float tau2[]);

int main()
{
    lue(luvut);
    tulosta(luvut);
    return 0;
}

void lue(float tau1[])
{
    int lkm=0;
    while(lkm<KOKO)
    {
        printf("anna %d:s desimaaliluku\n",lkm+1);
        scanf("%f",&tau1[lkm]);
        lkm++;
    }
}

void tulosta(float tau2[])
{
    int lkm=KOKO;
    while(lkm>0)
    {
        printf("tulosta %d:s desimaaliluku on %f\n",lkm,tau2[lkm-1]);
        lkm--;
}}
