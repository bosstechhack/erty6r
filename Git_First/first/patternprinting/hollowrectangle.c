#include<stdio.h>
int main(){
    int n,c;
    printf("enter th number of rows : ");
    scanf("%d",&n);
    printf("enter th number of colume : ");
    scanf("%d",&c);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if(i==1||i==n || j==1 ||j==c)
               printf(" * ");
            else{ printf("   ");}
       }
       
    printf("\n");  
    }
    return 0;
}



