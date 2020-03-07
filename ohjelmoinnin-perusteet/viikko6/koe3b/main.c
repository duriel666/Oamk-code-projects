#include <stdio.h>

int luku1, luku2, tulo;

int main()
{
    int xTau[5]={5,4,3,2,1};
    int zTau[5];

    lue();
    kasittele();
    tulosta();

    return 0;
}

void lue(){
    for(int i=0 ; i<5 ; i++){
            printf("syota luku\n");
            scanf("%d",&luku1);
            zTau[i] = luku1;
}

void kasittele(){
    tulo = luku1*luku2;
    return tulo;

}

void tulosta(){
    printf("lukusi \n");
       for(int i=0; i<5; i++){
           printf("%d\n",zTau[i]);
}
