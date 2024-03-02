#include<stdio.h>
#include<string.h>
int main(){
    int c,n,k;
    
    scanf("%d",&c);
    int d[c];
    for(int i=0;i<c;i++){
        d[i]=i;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j],&b[j]);

        }
        for(int j=0;j<n;j++){
            if(a[0]>a[j+1]){
             k=a[j+1];
             d[0]=5;
             break;
            }
        else{
            d[c]=-1;
        }   

       
    }
    }
    for(int i=0;i<c;i++){
    printf("%d\n",d[i]);}
    
    
    return 0;}
