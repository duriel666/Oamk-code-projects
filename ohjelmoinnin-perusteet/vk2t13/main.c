#include <stdio.h>

int main()
{
    int sala;
    printf("salanumero?\n");
    scanf("%d",&sala);
    if (sala == 17) {
        printf("oikein\n");
        return 0;
    }
    else{
        printf("yritä uudelleen\n");
        main ();
    }
    return 0;
}
