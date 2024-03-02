#include<iostream>


using namespace std;
int main(){
    int t;
    cin>>t;
    int p=0;
    while(t>0){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    char srr[s];
    cin>>srr;
    int k=p;
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
    cout<<arr[k]<<endl;
    p=k;
    }
    return 0;
}