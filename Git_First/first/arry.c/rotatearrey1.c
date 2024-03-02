 #include<stdio.h>
 void reverse(int a[],int p,int b){

 
  for(int i=p,j=b-1;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
  }
  return;
 }


int main(){
    int a[7]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    //steps
    k=k%n;
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    printf("\n");
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);

    }
    return 0;
}