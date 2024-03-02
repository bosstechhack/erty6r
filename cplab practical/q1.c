#include<stdio.h>
void ascending(int n,int a[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("asending order list: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

return;
}
void nonprime(int n,int b[]){
    printf("NON PRIME NUMBRER ARE: ");
    for(int m=0;m<n;m++){
      for(int k=2;k<b[m];k++){
        if(b[m]%k==0){
            printf("%d ",b[m]);
            break;
        }
      }
    }
}
int main(){
    int s;
    printf("Enter the size: ");
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
       scanf("%d",&a[i]);
    }
    int *p=a;
    ascending(s,p);
    nonprime(s,p);

    

    return 0;
}