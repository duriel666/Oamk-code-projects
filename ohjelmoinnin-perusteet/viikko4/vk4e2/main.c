#include <stdio.h>

int kerro(int luku1, int luku2);
void tulostaVastaus(int luku);

int main()
    {
     int tulos, ekaLuku=3, tokaLuku=4;
     tulos= kerro(ekaLuku, tokaLuku);//kerro-funktion kutsu palauttaa arvon tulos-muuttujaan
     tulostaVastaus(tulos); //tulostaVastaus-funktioon vied parametrina tulos-muutujan sisältö
     return 0;
    }

int kerro(int luku1, int luku2) //ensimmäinen int kertoo palutettavan arvon tyypin
    {
     int lopputulos;
     lopputulos=luku1*luku2;
     return lopputulos; //return-käsky palauttaa lopputulos-muuttuja sisällön
    }

void tulostaVastaus(int luku)
    {
     printf("Vastaus on %d\n",luku);
    }
