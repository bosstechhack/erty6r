//rotate the given array a by k step where k is non negative 
///ex if a[]={1,2,3,4,5,6,7};
//and k=3 the a[]={5,6,7,1,2,3,4,5}
#include<stdio.h>
int main(){
    int s,i,j,k,temp;
    printf("Size of the array\n");
    scanf("%d",&s);
    printf("Enter the number of term to be reverse:\n");
    scanf("%d",&k);
    int a[s];
    printf("Enter the Element of arrray\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);

    }
    printf("original arry is:\n");
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    printf("New array is:\n");
    for(i=0,j=s-1;i<k,j>=k;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
        
    }
    
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    
    }
    return 0;
}