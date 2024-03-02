//find the unique element set in the given arrey
#include<stdio.h>
int main(){
    int s,i,j,r,count;
    scanf("%d",&s);
    int a[s];
    int b[s];
    printf("Enter the element in\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++){
        count=1;
        for(j=i+1;j<s;j++){
            if(a[i]==a[j]){
                count =0;
                
                break;
            }
        }
        
        if(count==1){
            b[i]=a[i];
            printf("%d ",a[i]);

        }
        
        
    }
    
    return 0;
}