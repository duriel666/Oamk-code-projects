#include <stdio.h>

int main()
{
    int num1, num2, hi, lo;
    printf("kirjoita kaksi numeroa\n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2){
        hi=num1;
        lo=num2;
    }else{
        hi=num2;
        lo=num1;
    }
    printf("%d,",lo);
    printf("%d",hi);
    return 0;
}
