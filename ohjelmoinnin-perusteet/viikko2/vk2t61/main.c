#include <stdio.h>
int main()
{
   int num,sum;
   printf("anna numero tai 0 jos haluat lopettaa\n");
   sum = 0;
   scanf("%d",&num);
   while (num != 0)
     {
       sum += num;
       scanf("%d",&num);
       printf("Summa = %d  ",sum);
   }
   return 0;
}
