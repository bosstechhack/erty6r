#include<stdio.h>



int main(){
    int n;
    printf("Enter The Number Of Players In The Game: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    printf("\nPlayer With Their Number: ");
     for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("Sequence od Histroy: ");
    char srr[10000];
    scanf(" %s",srr);
    int k=0;
    int j=0;
    while(srr[j]!='\0'){
        if(srr[j]=='U'&& k<n-1){
          k++;
          j++;
          
        }
        if(srr[j]=='U'&& k==n-1){
          k=0;
          j++;
          
        }
        if(srr[j]=='S'&& k<n-2){
          k+=2;
          j++;
          
        }
        if(srr[j]=='S'&& k==n-2){
          k=0;
          j++;
          
        }
        if(srr[j]=='S'&& k==n-1){
          k=1;
          j++;
          
        }
        if(srr[j]=='R'&& k>0){
          k--;
          j++;
          
        }
        if(srr[j]=='R'&& k==0){
          k=n-1;
          j++;
          
        }
    }
    printf("Next Chance of Player: %d",arr[k]);


    return 0;
}