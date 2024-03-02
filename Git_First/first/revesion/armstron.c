#include<stdio.h>
int main(){
int n,r,o,c=0,p,sum=0;
scanf("%d",&n);
o=n;
while(n>0){
    n=n/10;
    c++;
}
n=o;
while(n>0){
    r=n%10;
    p=1;
    for(int i=1;i<=c;i++){
        p=p*r;
    }
    sum=sum+p;
    n=n/10;
}
if(sum==o){
    printf("armstrong number:");

}
else{printf("not armstrong number:");}
return 0;
}

