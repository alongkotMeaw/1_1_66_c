#include <stdio.h>
int main(){
int num,h = 0,count = 0;
int k[10];

    printf("Enter number:");
    scanf("%d",&num);
      for(int i =0;;i++){
          k[i] = num % 10;
          num = num / 10;
          if(num == 0) break;
          count += 1;
          }
      for(int i = count;;i--){

          printf("%d",k[i]);
          h = h+k[i];
          if(i > 0) printf(" + ");
          else break;
          }
      printf(" = %d",h);
      return 0;

}
