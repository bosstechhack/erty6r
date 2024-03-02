#include<stdio.h>
int perfect(int n){  
for(int i=1;i<=n;i++){
     int sum=0;
    for(int j=1;j<i;j++){
        if(i%j==0){
            sum+=j;
        }   
    }
    if(sum==i){
        printf("%d ",i);    
    }
}

}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    perfect(n);   
    return 0;
}
