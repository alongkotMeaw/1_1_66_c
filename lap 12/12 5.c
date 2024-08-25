#include <stdio.h>
#include <string.h>

int GetIntVal(char strConvert[]){
    int intReturn;
    intReturn = atoi(strConvert);
    return(intReturn);
}


void Dec2Bin (int ip1){
    int a[9],i = 0,strl;
    do
    {
        a[i] = ip1 % 2;
        ip1 /= 2;
        i++;
    }while(ip1 > 0);

    for(int k = 0;(8-i) > k;k++){
        printf("0");
    }

    for(int c = i-1; c >= 0;c--){
        printf("%d", a[c]);
    }

}

int main(){
    char ip[13];
    int ad;

    //in
    printf("Enter IP address:");
    scanf("%s",ip);
    printf("%s",ip);
    char *token = strtok(ip,".");

    //loop
    for(int i = 0;i < 4;i++){
        printf("\n%s:",token);
        //call fuction
        ad = GetIntVal(token);
        Dec2Bin (ad);
        token = strtok(NULL,".");


    }//end loop












return 0;
}
