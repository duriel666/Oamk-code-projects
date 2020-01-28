#include <stdio.h>

int main()
{
    int laskuri=0;
    int luku=0;
    int summa=0;
    while (laskuri<5){
        printf("syota int-luku\n");
        scanf("%d",&luku);
        if(luku%2==1){
            summa=summa+luku;
        }
        laskuri++;
    }
    printf("parittomien lukujen summa on %d\n",summa);
    return 0;
}
