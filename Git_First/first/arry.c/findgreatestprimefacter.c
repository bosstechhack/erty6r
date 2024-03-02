//write a program to find greatest prime facter of each element
#include<stdio.h>
int main(){
    int s,count;
    scanf("%d",&s);

    int a[s];
    int b[100];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);//take input
    }
    for(int i=0;i<s;i++){
        for(int j=2;j<a[i];j++){
            count=1;
            if(a[i]%j==0){
                count=0;
                b[j]
            }
        }
            
        
    }

    return 0;
}