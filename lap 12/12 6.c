#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float randfloat() //generates random float between 0.0 and 39.999...
{
    float x = rand() % 40;
    return (x + rand() / ((float)RAND_MAX + 1));
}
//เขียนฟังก์ชันอื่นๆ ทีเหลือ ด้านหลัง
//Mean
float Mean(float mark[]){
    float all = 0,mean;
    for(int j = 0; j < 50;j++){
        all = all + mark[j];
    }
    mean = all/50.0;
    return mean;
}

//Variance
float Varicance(float mark[],float mean){
    float all,Vari,mar = 0;

    for(int  j =0;j < 50;j++){
        all =mark[j] - mean;
        mar = mar + all*all;
    }
    Vari = (1.0/(49.0))*mar;
    return Vari;
    printf("\ncheck = %f\n",Vari);
}

//SD
float SD(float vari){
    return sqrt(vari);
}

//max
float findmax(float mark[]){
    float all = mark[0];
    for(int  j =1;j < 50;j++){
        if(mark[j] > all)
           all = mark[j];
    }
    return all;
}

//min
float findmin(float mark[]){
    float all = mark[0];
    for(int  j =1;j < 50;j++){
        if(mark[j] < all)
           all = mark[j];
    }
    return all;
}



int main() {
    float mean,Vari,Sd;
    float max, min;
    float mark[50];
    srand((int)time(0));
    // กำหนดค่าให้อะเรย์ mark จากการสุ่มตัวเลข
    for(int i = 0;i < 50;i++){
        mark[i] = randfloat();
    }
    mean = Mean(mark);
    Vari = Varicance(mark,mean);
    Sd = SD(Vari);
    printf("Mean = %0.2f\n", mean);
    printf("Variance = %0.2f\n", Vari);
    printf("SD = %0.2f\n", Sd);
   // คำสั่งเรียกฟังก์ชัน findMaxMin
   max = findmax(mark);
   min = findmin(mark);

        printf("Max = %0.2f, Min = %0.2f\n", max, min);
    return 0;
}
