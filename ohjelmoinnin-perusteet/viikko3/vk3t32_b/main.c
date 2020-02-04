#include <stdio.h>

int main()
{
    int num;
    printf("kuukauden numero?\n");
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
      default:
            printf("tuntematon kuukausi\n");
    }

    return 0;
}
