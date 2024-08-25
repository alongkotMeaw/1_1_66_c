#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
float randfloat() //generates random float between 0.0 and 39.999...
{
    float x = rand() % 40;
    return (x + rand() / ((float)RAND_MAX + 1));
}
//เขียนฟังก์ชันอื่นๆ ทีเหลือ ด้านหลัง



int main() {
    float max, min;
    float mark[50];
    int k;
    srand((int)time(0));
    // กำหนดค่าให้อะเรย์ mark จากการสุ่มตัวเลข
    fot(k = 0; k < 50; k++) {
        flaot j = randfloat()
            mark[k] = j;
    }
    printf("Mean = %0.2f\n", Mean(mark, 50));
    printf("Variance = %0.2f\n", Variance(mark, 50));
    printf("SD = %0.2f\n", SD(mark, 50));
    _____________________________________ // คำสั่งเรียกฟังก์ชัน findMaxMin

        printf("Max = %0.2f, Min = %0.2f\n", max, min);
    return 0;
}
