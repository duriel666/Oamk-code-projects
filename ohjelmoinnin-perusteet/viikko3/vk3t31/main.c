#include <stdio.h>

int main()
{
    int montako;
    float num, sum=0;
    printf("montako lukua?\n");
    scanf("%d",&montako);
    for (int i=0 ; i<montako ; i++){
        printf("kirjoita luku\n");
        scanf("%f",&num);
        sum += num;
    }
    printf("lukujen summa %.2f ja lukujen keskiarvo %.2f\n",sum,sum/montako);
    return 0;
}
