#include <stdio.h>

int main()
{
    int luku=1;
    int summa=0;
    while (luku!=0){
        printf("syota int-luku\n");
        scanf("%d",&luku);
        summa=summa+luku;
    }
    printf("lukujen summa %d\n",summa);
    return 0;
}
