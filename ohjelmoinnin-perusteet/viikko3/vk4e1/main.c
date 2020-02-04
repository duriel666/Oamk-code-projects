#include <stdio.h>

int main()
{
    int lkm, kierros;
    float luku, sum=0,keskia;
    printf("kierrosten maara\n");
    scanf("%d",&lkm);
    kierros=0;
    while (kierros<lkm){
        printf("anna desimaaliluku\n");
        scanf("%f",&luku);
        sum=sum+luku;
        kierros++;
    }
    keskia=sum/lkm;
    printf("summa on %f ka keskiarvo %f\n",sum,keskia);
    return 0;
}
