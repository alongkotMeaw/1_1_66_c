O#include <stdio.h>
#include <string.h>
#include <math.h>
int isHexa();
void HEx2Dec();
int main() {
    char num[60];
    int len_num,check;
    printf("Enter word: ");
    scanf("%s",num);
    len_num = strlen(num);
    check = isHexa(num,len_num);
    if(check == 0){
        printf("Not a Hexa number");
    }else
        HEx2Dec(num,len_num);
    return 0;
}




int isHexa(char *num,int len_num){
    for(int i =0;i < len_num;i++){
        if(!((num[i] >= '0' && num[i] <= '9') || (num[i] >= 'a' && num[i] <= 'f') || (num[i] >= 'A' && num[i] <= 'F'))){
            return 0;
        }
    }
    return 1;
}

void HEx2Dec(char *num,int len_num){
    double sum = 0;
    //ascll 0-9 = 49-57 ,A-F = 65-70 ,a-f =97-102
    for(int i =0;i < len_num;i++){
        if(num[i] >= '0' && num[i] <= '9'){
            sum = sum +(num[i] - '0') * pow(16,len_num-i-1);
        }else if(num[i] >= 'a' && num[i] <= 'f'){
           sum = sum + (num[i] - 'a'+10)* pow(16,len_num-i-1);
        }else if(num[i] >= 'A' && num[i] <= 'F'){
           sum = sum + (num[i] - 'A'+10)* pow(16,len_num-i-1);
        }
    }printf("%.0f",sum);
}



