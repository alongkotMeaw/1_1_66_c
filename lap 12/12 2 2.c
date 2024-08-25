#include <stdio.h>
float CircleArea(double r){
    double pi = 3.14;
    return pi*r*r;

}

int main(){
    double area, r=5;
    area = CircleArea(r);
    printf("Circle area = %0.2f\n", area);
    return 0;
}
