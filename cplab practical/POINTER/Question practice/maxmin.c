//write a programm to find max and min of the and array in the form of array
#include<stdio.h>
#include<string.h>
void  function(int a[200],int s,int b[2]){
    
    
    int temp;
     int max=a[0];
    for(int i=0;i<s;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    b[0]=max;
    int min=a[0];
    for(int i=0;i<s;i++){
        if(min>a[i]){
            min=a[i];
        }    
    }
    b[1]=min;
return ;
}

int main(){
    int a[200];
    int b[2];
    scanf("%[^\n]",a);//doubt wala question hai
    
    int s=sizeof(a)/sizeof(int);
    function(a,s,b);
    printf(" %s",b);
    return 0;
}
