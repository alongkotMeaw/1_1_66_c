#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
        //RAND_MAX is a constant
       srand((unsigned) time(NULL));
       //Initializes random number generator
      int n,r,max,rou =1;
      printf("Enter N:");
      scanf("%d",&n);
      int a[n];
      printf("The random number are:");
      for(int i = 0;i < n;i++){
        r = (rand() / (float) RAND_MAX) * (98 + 1) + 1;
        a[i] = r;
         printf(" %d",r);
      }
      max = a[0];
      for(int i = 1;i < n;i++)
          if(a[i] > max){
             max = a[i];
             rou++;
            }
    a[rou] =  a[(int)ceil(n/2.0)-1];
    a[(int)ceil(n/2.0)-1] = max;
    printf("\nThe maximum number is %d\n",max);
    printf("Array after putting the maxinum at index %d\n",(int)ceil(n/2.0)-1);
    printf("%d",a[0]);
    for(int i = 1;i < n;i++)
        printf(" %d",a[i]);

    return 0;
}
