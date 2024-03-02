#include<stdio.h>
int  compare(int a,int b,int c){
    if(a<b&&a<c){return a;}
    if(b<a&&b<c){return b;}
    else{return c;}
   
}

int main(){
    printf("Enter the three number\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Smallest number is\n%d",compare(a,b,c));
    
    return 0;
}