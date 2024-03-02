//write program to convert decimal number  to binary number using function
#include<stdio.h>
void function(float a , int b){
    float c = a-b;
    int p,m,t=0;
    int d[200];
    for(int i = b; i>0 ;i=i/2){
        p= i%2;
        d[t]=p;
        t++;
    }
    for(int j=t-1;j>=0;j--){
        printf("%d",d[j]);
    }
    printf(".");
    
    for(float j=2*c; j>0 ;j*=2){
        m=j;
        printf("%d",m);
        j=j-m;
        
    }
    return;
    

}
int main(){
    float a;
    scanf("%f",&a);
    function(a,a);


    return 0;
}