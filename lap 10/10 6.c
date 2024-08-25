 #include <stdio.h>
int main(){
    char months[12][10] = {"January","February", "March", "April", "May","June", "July", "August", "September","October", "November" ,"December"};
    int days[12] = { 31, 28, 31, 30,31, 30, 31, 31,30, 31, 30, 31};
    int mon;
for(;;){
    printf("Enter number of month (1-12):");
    scanf("%d",&mon);
    if(mon < 1 || mon > 12){
            printf("Invalid month number");
            break;
    }
    printf("%s has %d days\n",months[mon-1],days[mon-1]);
}
return 0;
}
