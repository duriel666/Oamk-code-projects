#include <stdio.h>
int main()
{
 int vaimonPalkka = 3000;
 int miehenPalkka = 3500;
 int perheenTulot;
 printf("Lasketaanpa lasku:\n");
 perheenTulot = vaimonPalkka + miehenPalkka;
 printf("Perheen tulot on %d euroa\n", perheenTulot);
 if (perheenTulot > 6000)
 {
 //tämä haara suoritetaan, jos if sulkulausekkeen
 //ehto on tosi
 printf("Mahtavaa !\n");
 }
 return 0;
}
