#include <stdio.h>

int main()
{
    int p1;
    printf("pistemaara\n");
    scanf("%d",&p1);
    if (p1 >= 8 && p1 <= 11){
        printf("arvosana 1\n");
        return 0;
    }
    if (p1 >= 12 && p1 <=14){
         printf("arvosana 2\n");
         return 0;
    }
    if (p1 >= 15 && p1 <=18){
         printf("arvosana 3\n");
         return 0;
    }
    if (p1 >= 19 && p1 <=21){
         printf("arvosana 4\n");
         return 0;
    }
    if (p1 >= 22 && p1 <=124){
         printf("arvosana 5\n");
         return 0;
    }
    return 0;
}
