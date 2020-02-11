#include <stdio.h>

int main()
{
    int taulukko[2][3]={{100,200,300},{1000,2000,3000}};
    for(int a=0; a<2; a++){
        for(int b=0; b<3; b++){
            printf("%d\n",taulukko[a][b]);
        }
    }
    return 0;
}
