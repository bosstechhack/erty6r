#include<stdio.h>


int main(){
    int s,k,c,C,n;
    printf("Enter the size of matrix row and column\n");

    scanf("%d %d",&s,&k);
    int a[s][k];
    printf("Enter the element of matrix\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf(" Original matrix\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<k;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter 0 for start change\n");
    int start;
    scanf("%d",&start);
    while(start==0){
    printf("Enter '1' for row swap or inter '2' for column swap\n");
    scanf("%d",&n);
    if(n==1){
     int r,R,temp;
     printf("Enter the number of row to be swap\n");
    scanf("%d %d",&r,&R);
    for(int j=0;j<k;j++){
        temp=a[r-1][j];
        a[r-1][j]=a[R-1][j];
        a[R-1][j]=temp;
    }
    printf("New matrix\n");
      for(int i=0;i<s;i++){
        for(int j=0;j<k;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    }
    if(n==2){
     int alt;
     printf("Enter the number of column to be swap\n");
    scanf("%d %d",&c,&C);
    for(int i=0;i<s;i++){
        alt=a[i][c-1];
        a[i][c-1]=a[i][C-1];
        a[i][C-1]=alt;
    }
    printf("New matrix\n");
      for(int i=0;i<s;i++){
        for(int j=0;j<k;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    }
    // start=1;
    printf("if you want to continue enter'0'\n");
    scanf("%d",&start);
    }
    

    return 0;
}
    
    
    
        
        
   