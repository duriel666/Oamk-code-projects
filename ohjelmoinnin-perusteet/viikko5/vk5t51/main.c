#include <stdio.h>


void asknumber();
void writenumber();

float numbers[7];

int main()
{
    asknumber();
    writenumber();
}

void asknumber()
{
    float input;
    for(int i=0; i<7; i++){
        printf("syota luku ");
        scanf("%f",&input);
        numbers[i] = input;
    }
}
void writenumber()
{
    printf("lukusi \n");
    for(int i=6; i>=0; i--){
        printf("%.2f\n",numbers[i]);
    }
}
