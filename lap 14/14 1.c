 #include <stdio.h>
#include <string.h>


// 1.1
void Acronym(char *s);

int main() {
    char uname[30];
    // 1.2
    printf("Enter uname: ");
    scanf("%[^\n]", uname);
    // 1.3
    Acronym(uname);

    return 0;
}

void Acronym(char *s) {
    // 1.4
    char *token;
    token = strtok(s, " ");
    while (token != NULL) {
        printf("%c", toupper(token[0]));
        token = strtok(NULL, " ");
    }
    printf("\n");
}
