#include <stdio.h>
int main()
{
    int round = 0,i,k = 0;
    char pas[5] = "HQ1O",pas2[5] = "vX39";
    char pin[5];
    for(i = 0;i < 3;i++){
        printf("Enter PIN 1:");
        scanf("%s",pin);
        if(!strcmp(pas,pin)){
            printf("PIN 1 unlocked…\n");
            for(int j =0;j < 3;j++ ){
                printf("Enter PIN 2:");
                scanf("%s",pin);
                if(!strcmp(pas2,pin)){
                 printf("PIN 2 unlocked… \nSafe opened.");
                 k = 1;
                 break;
                }
                else printf("Invalid PIN!\n");
                round++;
            }//for in
            if(k == 1 ) break;
            printf("Too many attemps.");
            if(round == 3) break;//ÍÍ¡ÅÙ»ã¹à¡Ô¹3µÑ´¨ºàÅÂ

        }else printf("Invalid PIN!\n");


    }//for out
    if( i == 3) printf("Too many attemps.");



        return 0;
}
