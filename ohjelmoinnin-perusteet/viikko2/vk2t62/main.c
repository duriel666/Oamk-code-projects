
#include <stdio.h>

int main()
{
    int sum = 0;
    int num = 0;
    for(int i = 0; i < 5; i++) {
        printf("syota luku: ");
        scanf("%d", &num);
        if(num % 2 != 0) {
            sum += num;
        }
    }
    printf("parittomien lukujen summa: %d\n", sum);
    return 0;
}
