#include <stdio.h>
#include <string.h>

int main(){
    char name[100]="",name1[200],name2;
    int word = 1,lin = 1,spa = 0,i = 0;
     FILE *fptr;
     printf("Enter a filename:");
     //gets(name1);
     fptr= fopen("mydata.txt","r");//ยังไม่ได้
     if (fptr == NULL) {
            printf ("Cannot open file to write!\n");
            return(-1);
    }

    name2 = getc(fptr);
    while(name2 != EOF){
             if(name2 == '\n') lin =lin + 1;
             name[i] =name2;
                name2 = getc(fptr);
                spa++;
                i++;


    }
        for(int i = 0;i < strlen(name);i++){
                 if (name[i]==' '&&name[i+1]!=' '||name[i] == '\n')
                     word = word +1;
               }//นับจำนวน

    printf("Lines : %d\n",lin);
    printf("Words : %d\n",word);
    printf("Characters(with spaces): %d\n",i-1);
    return 0;

}
