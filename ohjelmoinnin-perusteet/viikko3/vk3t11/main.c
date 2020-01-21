#include <stdio.h>

int main()
{
    int salanum;
    printf("salanumero?\n");
    scanf("%d",&salanum);
    if (salanum == 17){
        printf("oikein\n");
        return 0;
    }
    if (salanum != 17){
        printf("vaarin meni\n");
        main();
    }
    return 0;
}
