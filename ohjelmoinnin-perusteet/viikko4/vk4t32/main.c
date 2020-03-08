#include <stdio.h>

int tulostaValikko();
void nelio();
float lueArvo(char msg[]);

int main()
{
    int val=0;
    while (val!=9) {
        val=tulostaValikko();
        if(val==1) nelio();
    }
    return 0;
}

int tulostaValikko()
{
    int valinta;
    printf("Paavalikko\n");
    printf("1. Nelion keha\n");
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
float lueArvo(char msg[])
{
    float luku;
    printf("%s",msg);
    scanf("%f",&luku);
    return luku;
}
