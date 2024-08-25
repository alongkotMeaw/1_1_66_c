#include <stdio.h>
#include <math.h>
void digit(int n,int m,int num[]){
    int k,l;
    for(;n <= m;n++){
        l = n;
        while(l > 0){
            k = l %10;
            num[k]++;
            l = l/10;
        }
    }



}

int main(){
   int n,m,num[11] = {0};
   printf("n =");
     scanf("%d",&n);
   printf("m =");
     scanf("%d",&m);
     digit(n,m,num);
     for(int i = 0; i <= 9;i++){
        printf("%d %d\n",i,num[i]);

     }



    return 0;
}
