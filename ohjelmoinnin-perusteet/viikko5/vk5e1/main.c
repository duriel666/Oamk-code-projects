#include <stdio.h>

int main()
{
    int luvut [6], parillisia=0, laskuri=0;

    while(laskuri<6){
        printf("Anna kokonaisluku %d\n",laskuri+1);
        scanf("%d",&luvut[laskuri]);
        laskuri++;
    }
    laskuri=0;

    while(laskuri<6){
        if(luvut[laskuri]%2==0) parillisia++;
        laskuri++;
    }
    printf("Parillisia lukuja oli %d\n",parillisia);
    return 0;
}
