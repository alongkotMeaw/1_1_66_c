#include <math.h>
#include <stdio.h>
void cal(float a,float b,float c,float *x1,float *x2){
    *x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    *x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
}

int main()
{
    float a,b,c,k,x,x1,x2;
    printf("Enter coefficients a, b and c:");
    scanf("%f %f %f",&a,&b,&c);
    if(a == 0){
        printf("Oops! This is not a quadratic equation");
        return 1;
    }
    cal(a,b,c,&x1,&x2);
    k = (b*b - 4*a*c);
    if(k < 0) printf("The roots are complex");
    else if(k == 0) printf("x1 = %.2f x2 =%.2f",x1,x1);
    else printf("x1 = %.2f x2 =%.2f",x1,x2);

    return 0;
}
