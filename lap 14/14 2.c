#include <stdio.h>
#include <string.h>



void Acronym(char *s);

int main() {
    char uname[100];
    printf("Enter uname: ");
    scanf("%[^\n]", uname);
    Acronym(uname);

    return 0;
}

void Acronym(char *s) {
    char *token;
    token = strtok(s, " ");
    int check = 0; //first word
    while (token != NULL) {
        if(check == 0){
            printf("%c", toupper(token[0]));
            check = 2;
        }
        // if != i,of....... print
        else if(!strcmp(token, "i") || !strcmp(token, "of") || !strcmp(token, "the") || !strcmp(token, "on" ) || !strcmp(token, "at")){}
        else if(!strcmp(token, "for") || !strcmp(token, "with") || !strcmp(token, "a")  || !strcmp(token, "an") || !strcmp(token, "in")){}
        else printf("%c", toupper(token[0]));

        token = strtok(NULL, " ");
    }
    printf("\n");
}
