#include<stdio.h>
int main(){
int number[3]={100,200,300};
int *pt;
int i;
pt = number;
for(i = 2;i>=0;i--)
printf("Number[%d] = %d\n",i,*(pt+i));
*pt = *pt + i;
}
