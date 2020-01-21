#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Kokonaisluku\n");
    scanf("%d",&num1);
    printf("Toinen kokonaisluku\n");
    scanf("%d",&num2);
    if (num1%num2 == 0)
    {
        printf("jaollinen\n");
    }
    return 0;
}
