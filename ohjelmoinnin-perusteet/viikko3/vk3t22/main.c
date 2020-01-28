#include <stdio.h>

int main()
{
    char var;
    printf("valitse a, b tai c.\n");
    scanf("%c",&var);
    switch (var) {
        case 'a': printf("painoit aan\n");
        break;
        case 'b': printf("painoit been\n");
        break;
        case 'c': printf("painoit ceen\n");
        break;
        default: printf("vaara merkki\n");
    }
    return 0;
}
