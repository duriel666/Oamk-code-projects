#include <stdio.h>

int main()
{
    int var;
    printf("valitse 1, 2 tai 3.\n");
    scanf("%d",&var);
    switch (var) {
        case 1: printf("valitsit 1\n");
        break;
        case 2: printf("valitsit 2\n");
        break;
        case 3: printf("valitsit 3\n");
        break;
        default: printf("valitsit jotakin muuta\n");
    }
    return 0;
}
