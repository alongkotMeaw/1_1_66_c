#include<stdio.h>
#include<string.h>
void countLetters(char str[],int *contains,int *vowels);

int main(){
    //loop
    for(;;){
        //as
        char str[21];
        int contains = 0,vowels = 0;

        //input
        printf("Enter word:");
        scanf("%20s",str);

        if(!strncmp(str,"end",3) && strlen(str) == 3 ) break;
        countLetters(str,&contains,&vowels);

        //out
        printf("%s contains %d  and %d vowels\n",str,contains,vowels);

    }//end loop

}

void countLetters(char str[],int *contains,int *vowels){
    for(int i = 0;i < strlen(str);i++){
        if(str[i]  == 'a'||str[i]  == 'e'||str[i]  == 'i'||str[i]  == 'o'||str[i]  == 'u')
            *vowels = *vowels + 1;
        else
            *contains = *contains + 1;

    }

}
