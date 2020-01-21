#include <stdio.h>

int main()
{
 int lukumaara = 0; //lukumaara on muutujan nimi
 printf("Montako kertaa tulostetaan?\n");
 scanf("%d",&lukumaara);
 int i=0;
 //toistetaan niin kauan kuin lukumaara muutujan arvo
 //on suurempi kuin i muuttujan arvoo
 //
 while (lukumaara>i)
 {
 printf("Opiskelen C-kieltä\n");
 i++; //sama kuin i=i+1;
 }
 return 0;
}
