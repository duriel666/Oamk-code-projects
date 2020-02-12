#include <stdio.h>

#define SIZE 100
char input[SIZE];

int main()
{
    int numOfA = 0;
    printf("merkkeja\n");
    scanf("%s", input);
    for(int i = 0; i < SIZE; i++) {
        if(input[i] == 'a' || input[i] == 'A') {
            numOfA++;
        }
    }
    printf("Taulukossa on %d A-kirjainta\n", numOfA);
    return 0;
}
