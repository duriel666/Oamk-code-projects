#include <stdio.h>

int main()
{
    float input, numbers[7];
    for(int i=0 ; i<7 ; i++){
        printf("syota luku ");
        scanf("%f",&input);
        numbers[i] = input;
    }
    printf("lukusi \n");
    for(int i=0 ; i<7 ; i++){
        printf("%.2f\n",numbers[i]);
    }
}
