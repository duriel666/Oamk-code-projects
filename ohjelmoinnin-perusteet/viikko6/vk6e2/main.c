#include <stdio.h>
#define KOKO 7

float luvut[KOKO];

void lue();
void tulosta();

int main()
{
    lue();
    tulosta();
    return 0;
}

void lue()
{
    int lkm=0;
    while(lkm<KOKO)
    {
        printf("anna %d:s desimaaliluku\n",lkm+1);
        scanf("%f",&luvut[lkm]);
        lkm++;
    }
}

void tulosta()
{
    int lkm=KOKO;
    while(lkm>0)
    {
        printf("tulosta %d:s desimaaliluku on %f\n",lkm,luvut[lkm-1]);
        lkm--;
}}
