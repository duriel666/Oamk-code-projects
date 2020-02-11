#include <stdio.h>

int main()
{
    float input, sum=0, numbers[4];
    for(int i=0; i<4; i++){
        printf("Numero\n");
        scanf("%f",&input);
        numbers[i] = input;
    }
    for(int i=0; i<4; i++){
        sum += numbers[i];
    }
    printf("Lukujen summa %.2f ja keskiarvo %.2f\n",sum,sum/4);
    return 0;
}
