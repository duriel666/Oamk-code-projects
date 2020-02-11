#include <stdio.h>

int main()
{
    int numbers[6], parisumma = 0;
    for(int i = 0 ; i < 6 ; i++){
        printf("kokonaislukuja\n");
        scanf("%d", &numbers[i]);
            }
            for(int i = 0; i < 6; i++){
                if(numbers[i] % 2 == 0){
                    parisumma++;
                }
            }
    printf("parillisia %d\n", parisumma);
    return 0;
}
