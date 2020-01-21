#include <stdio.h>

int main()
{
    char nimi [50];
    int num;
    printf("nimesi?\n");
    scanf("%s",nimi);
    printf("montako kertaa?\n");
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        printf("%s\n",nimi);
    }
    return 0;
}
