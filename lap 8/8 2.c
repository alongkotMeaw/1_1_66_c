#include <stdio.h>
int main(){
int elem[10];
int i, n;
   printf("Enter N:");
   scanf("%d",&n);
   for (i = 0;i < n; i++)
      scanf("%d",&elem[i]);
   for(i = n-1;i >=0;i--)
    printf("%d ",elem[i]);
}
