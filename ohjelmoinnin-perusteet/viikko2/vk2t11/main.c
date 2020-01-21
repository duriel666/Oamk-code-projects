#include <stdio.h>

int main()
{
    int num;
    printf("Kirjoita kokonaisluku: \n");
    scanf("%d",&num);
    if (num > 0)
    {
        printf("Positiivinen\n");
    }
    if (num < 0)
    {
        printf("Negatiivinen\n");
    }
    return 0;
}
