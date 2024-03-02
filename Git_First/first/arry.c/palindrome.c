//check the given number is palindrom
//ex 12321 is palindrom number
#include<stdio.h>
int main(){
    int a[100];
    int i,s,j,count=0;
    scanf("%d",&s);
    for(i=0;i<s;i++){
    scanf("%d",&a[i]);

    }
    for(i=0,j=s-1;i<j;i++,j--){
        
               if(a[i] != a[j]){
                count=1;
                break;
            }
       
    }
    if(count==0){
        printf("The Given number is palindrom number");

    }
    else{
        printf("the given number is not palindrom number");
        }

    return 0;
}