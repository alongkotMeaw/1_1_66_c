#include <stdio.h>

int main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int fido[n];
    fido[0] = 0;
    fido[1] =1;
    for(int i = 2;i<n;i++)
    fido[i] = fido[i-2] + fido[i - 1];
    for(int I =0;I < n ;I++){
    printf("%d",fido[I]);
    if(I != n-1) printf(",");
    }

}
