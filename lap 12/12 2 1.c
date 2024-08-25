#include <stdio.h>
void CircleArea(double r, double * area){
    double pi = 3.14;
    *area = pi*r*r;
}

int main(){
    double area, r=5;
    CircleArea(r,&area);
    printf("Circle area = %0.2f\n", area);
    return 0;
}
