#include <stdio.h>

int main()
{
    char knimi[50];
    printf("nimesi\n");
    scanf("%s",knimi);
    int iTaiJokuMuuNimi=0;
    while(iTaiJokuMuuNimi<3)
    {
        printf("merkki %d on %c\n",iTaiJokuMuuNimi,knimi[iTaiJokuMuuNimi]);
        iTaiJokuMuuNimi++;
    }
    return 0;
}
