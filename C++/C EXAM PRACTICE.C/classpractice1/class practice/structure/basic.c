#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of days");
    scanf(" %d",&n);
    const int d=n;
    int year=0;
    int month=0;
    int days=0;
    int r=0;
        r=n%365;
        year=n/365;  
        n=r;
        r=n%30; 
        month=n/30;
          
        r=days;
    printf("year: %d\nmonth: %d\n days: %d",year,month,days);
    
  return 0;  
}

   

    
    

    


    
    
