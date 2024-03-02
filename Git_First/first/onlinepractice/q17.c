#include<stdio.h>
 int febi(int t){
     int feb;
     if(t==2){  return 1;}
     if(t==1){   return 0;}
     feb=febi(t-1)+febi(t-2);
     
     return feb;
 }
 int main(){
     int n,m;
     scanf("%d",&n);
     int t=1;
    while(t>0){
         m=febi(t);
        if(m<n){
            printf("%d",m);
        }
        else if(m>n){
            return 0;
        }
        t++;
    }
     
     return 0;
 }