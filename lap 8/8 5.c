#include <stdio.h>
#include <math.h>

int main()
{
    int numbit,Decimal = 0;
   printf("Enter number of bits:");
   scanf("%d",&numbit);
   int bit[numbit];
   printf("Enter binary number %d bits:",numbit);
   for(int i = numbit - 1;i >=0 ;i--){
       scanf("%d",&bit[i]);
        Decimal = Decimal+bit[i]*pow(2,i);
   }
   printf("Decimal number = %d",Decimal);
   return 0;

}
