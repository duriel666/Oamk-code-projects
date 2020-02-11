#include <stdio.h>

#define pii 3.14159

void tulostaValikko();
void nelio();
void ympyra();
float lueArvo(char msg[]);

int main()
{
    int val=0;
    while (val!=9) {
        val=tulostaValikko();
        if(val==1) nelio();
        if(val==2) ympyra();
    }
}

void tulostaValikko()
{
    int valinta;
    printf("Paavalikko\n");
    printf("1. Nelion keha\n");
    printf("2. Ympyran keha\n");
    printf("9. Lopeta\n");
    printf("syota toiminnan numero\n");
    scanf("%d",&valinta);
    return valinta;
}

void nelio()
{
    float sivu;
    float keha;
    sivu=lueArvo("Anna nelion sivun pituus\n");
    keha=4*sivu;
    printf("Nelion keha on %f\n",keha);
}
void ympyra()
{
    float sade;
    float ykeha;
    sade=lueArvo("Anna ympyran sade\n");
    ykeha=2*sade*pii;
    printf("Ympyran keha on %f\n",ykeha);
}
float lueArvo(char msg[])
{
    float luku;
    printf("%s",msg);
    scanf("%f",&luku);
    return luku;
}
