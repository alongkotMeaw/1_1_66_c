#include <stdio.h>
#include <string.h>
int main(){
    char s1[30], s2[30];
    int i =1;
    printf("Please enter word: ");
    gets(s1);

    printf("%s",s1);


    if (strcmp(s1,strrev(s1))==0)
    printf(" is a palindrome.\n");

    else
    printf(" is not a palindrome.\n");

    return 0;
}
