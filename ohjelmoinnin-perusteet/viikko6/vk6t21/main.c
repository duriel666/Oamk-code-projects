#include <stdio.h>

#define etunimi 20
#define sukunimi 20

int main()
{
    struct tiedot{
        char nimi1[etunimi];
        char nimi2[sukunimi];
        int ika;
    };
    struct tiedot t;
    printf("etunimi \n");
    scanf("%s",t.nimi1);
    printf("sukunimi \n");
    scanf("%s",t.nimi2);
    printf("ika \n");
    scanf("%d",&t.ika);
    printf("%s %s %d",t.nimi1,t.nimi2,t.ika);

    return 0;
}
