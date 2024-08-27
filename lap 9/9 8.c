#include <stdio.h>
#include <string.h>

int main()
{
     FILE *fptr;
     fptr= fopen("mydata.txt","w");
     if (fptr == NULL) {
            printf ("Cannot open file to write!\n");
            return(-1);
    }
       char name[100] = "",adress[200] = "";
        printf("Enter your full name:");
       scanf(" %[^\n]s",name);
       //jj
       printf("Enter your address:");
       scanf(" %[^\n]s",adress);
       fprintf(fptr,"%s\n%s",name,adress);
    fclose (fptr);
}
