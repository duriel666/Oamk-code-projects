#include <stdio.h>

int main()
{
    printf("kuukauden numero: ");
    int num;
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("tammikuu\n");
            break;
        case 2:
            printf("helmikuu\n");
            break;
        case 3:
            printf("maaliskuu\n");
            break;
        case 4:
            printf("huhtikuu\n");
            break;
        case 5:
            printf("toukokuu\n");
            break;
        case 6:
            printf("kesakuu\n");
            break;
        case 7:
            printf("heinakuu\n");
            break;
        case 8:
            printf("elokuu\n");
            break;
        case 9:
            printf("syyskuu\n");
            break;
        case 10:
            printf("lokakuu\n");
            break;
        case 11:
            printf("marraskuu\n");
            break;
        case 12:
            printf("joulukuu\n");
            break;
        default:
            printf("tuntematon kuukausi\n");

    }
    return 0;
}
