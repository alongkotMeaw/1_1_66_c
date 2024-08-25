#include <stdio.h>
void factorial(int n,int* fac)
{
int i,fac=1;
for(i=n;i>=1;i--)
fac=fac*i;
return fac;
}
void fibo(int num)
{
int i=0,j=1,sum=0;
while(sum<=num)
{
printf("%d ",sum);
i=j;
j=sum;
sum=i+j;
}
printf("\n");
}
void main()
{
int x,y=1;
printf("Enter the number: ");
scanf("%d",&x);
y = factorial(x,y);
printf("%d\n",fac);
printf("%d\n",y);
printf("Enter limit for the series:");
scanf("%d",&y);
fibo(x,y);
}
