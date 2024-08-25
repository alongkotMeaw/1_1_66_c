#include <stdio.h>
#include <string.h>
void findPerson();

typedef struct{
    char name[15];
    char sname[15];
    int age;
    char gender;
    } person;

int main() {
    person p1[5] = {{"Harry","Potter",20,'M'}
                   ,{"Ron","Wisley",21,'M'}
                   ,{"Jonh","Snown",35,'M'}
                   ,{"Arya","Stark",15,'F'}
                   ,{"Ariana","Grande",20,'M'}};

    findPerson(p1);

return 0;
}

void findPerson(person p1[]){
    char find[20],change;
    int i,check = 0;
    printf("Enter searched name/surname:");
    scanf("%s",find);
    //covert A a
    change = toupper(find[0]);
    find[0] = change;
    for(i = 0;i < 5;i++){
        if(!strncmp(p1[i].name,find,strlen(find)) ||!strncmp(p1[i].sname,find,strlen(find))){
            printf("Searched name matches person No.%d",i+1);;
            printf("\n%s ",p1[i].name);
            printf("%s",p1[i].sname);
            check = 1;
        }

    }
    if(check == 0){
        printf("Not found person with the searched name/surname");
    }
}
