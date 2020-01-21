#include <stdio.h>

int main()
{
     /*seuraavassa määritellään kokonaislukumuuutuja ika ja sijoitetaan
     siihen 0
     */
     int ika;
     ika = 0; //int tarkoittaa kokonaislukua, ika on muutujan nimi
     printf("Mikä on sinun ikäsi (kokonaislukuna)?\n");
     scanf("%d",&ika); //lukee käyttäjän antaman kokonaisluvun
     printf("Sinun ikäsi on %d vuotta\n",ika);
     return 0;
}
