#include <stdio.h>

int main()
{
    int credit[5] = {4,3,3,3,1};
    char grade[5] = {"BBCBA"};
    int a[5],b =0,count = 0;
    float GPA,all =0;
    for(int i =0; i< 5;i++){
        if(grade[i] == 65) a[i] = 4;
        else if(grade[i] == 65) a[i] = 4;
        else if(grade[i] == 66) a[i] = 3;
        else if(grade[i] == 67) a[i] = 2;
        else if(grade[i] == 68) a[i] = 1;
        else if(grade[i] == 70) a[i] = 0;
        b = b + credit[i];
         all = all + credit[i]*a[i];
    }
    GPA = all/b;
    printf("GPA=%.2f",GPA);
    return 0;
}
