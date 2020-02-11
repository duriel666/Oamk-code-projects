#include <stdio.h>

int main()
{
    float luvut[4],summa=0,keskiarvo;
    int laskuri=0;

    while (laskuri<4){
        printf("Anna desmaaliluku\n");
        scanf("%f",&luvut[laskuri]); //luvut [0],luvut[1], luvut[2], luvut[3]
        laskuri++;
    }
    laskuri=0;
    while(laskuri<4){
        summa=summa+luvut[laskuri];
        laskuri++;
    }
    keskiarvo=summa/4;
    printf("keskiarvo on %f ja summa on %f\n",keskiarvo,summa);
    return 0;
}
