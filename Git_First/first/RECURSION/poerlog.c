#include<stdio.h>
int powerlog(int a, int b){
    if(b==1) return a;  
    if(b%2==0){ return powerlog(a,b/2)*powerlog(a,b/2);}
    else{return powerlog(a,b/2)*powerlog(a,b/2)*a;}
    
  
}





int main(){
    int a,b;
    scanf("%d%d",&a,&b);
   int p= powerlog(a,b);
   printf("%d",p);

    return 0;
}