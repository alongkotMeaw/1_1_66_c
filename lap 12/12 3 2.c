#include <stdio.h>
int sum = 0;
void cal1(){
    int i;
    for(i =0; i < 5; i++)
    sum = sum + i;
}

void cal2(){
    int sum = 0;
    int j;
    for (j = 0; j < 5; j++)
    sum = sum + (j*j);
}

int main(){
    cal1();
    cal2();
    printf("%d\n", sum);
    return 0;
}
