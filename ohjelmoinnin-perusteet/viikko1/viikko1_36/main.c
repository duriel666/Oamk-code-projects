#include <stdio.h>

extern int a, b, c;
extern int d;

int main()
{
    int a, b, c;
    int d;
    a = 1; b = 2; c = 3;
    d = a + c;

    printf("value of d : %d \n", d);

    return 0;

}
