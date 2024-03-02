#include<stdio.h>
int power(int a, int b){
    if(b==1){  
     return 1;
    }
    int p=a*power(a,b-1);
    return p;
}





int main(){
    int a,b;
    scanf("%d%d",&a,&b);
   int p= power(a,b);
   printf("%d",p);

    return 0;
}