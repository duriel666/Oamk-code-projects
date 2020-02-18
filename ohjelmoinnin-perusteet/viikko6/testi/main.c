#include <stdio.h>

#define etunimi 20
#define sukunimi 20

struct tiedot{
    char nimi1[etunimi];
    char nimi2[sukunimi];
    int ika;
};

void kysytiedot(struct tiedot t);
void kirjoitatiedot(struct tiedot t);

int main()
{
    struct tiedot t;
    struct tiedot *tiedotPtr;
    tiedotPtr = &t;
    kysytiedot(*tiedotPtr);
    return 0;
}

void kysytiedot(struct tiedot t){
    printf("etunimi \n");
    scanf("%s",t.nimi1);
    printf("sukunimi \n");
    scanf("%s",t.nimi2);
    printf("ika \n");
    scanf("%d",&t.ika);
    kirjoitatiedot(t);
}

void kirjoitatiedot(struct tiedot t){
    printf("%s %s %d",t.nimi1,t.nimi2,t.ika);
}
