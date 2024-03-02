#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of days\n");
    scanf("%d",&n);
   
    int year= n/365;
     n=n%365;
     int month=n/30;
     n=n%30;
     int day=n;
     printf("year: %d\n",year);
     printf("month: %d\n",month);
     printf("day: %d\n",day);

    


    return 0;
}