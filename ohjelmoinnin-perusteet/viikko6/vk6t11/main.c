#include <stdio.h>

void x5(int luku[]);
void kirjoita(int luku[]);

int main()
{
    int luku[5];
    int *ptr = luku;
    for(int i=0; i<5; i++){
        printf("kokonaisluku\n");
        scanf("%d",&luku[i]);
    }
    x5(ptr);
    return 0;
}

void x5(int luku[]){
    for(int i=0; i<5; i++){
        luku[i]=luku[i]*5;
    }
    kirjoita(luku);
}

void kirjoita(int luku[]){
    for(int i=0; i<5; i++){
        printf("%d\n",luku[i]);
    }
}
