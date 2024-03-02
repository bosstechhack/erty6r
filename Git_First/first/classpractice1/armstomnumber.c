#include<stdio.h>
int main(){
    int n,s=0,i,l=0,r,p,o;
    scanf("%d",&n);
    o=n;
    while(n>0){
        n=n/10;
        l++;
        
    }
    n=o;
    while(n>0){
        r=n%10;
        p=1;
        for(i=1;i<=l;i++){
            p=p*r;
        }
         s=s+p;
         n=n/10;
    }
    if(s==o) {printf("armstrong number");   
    }
    else{printf("not a armstrong number");
        
    }
        

    
    
    return 0;
}