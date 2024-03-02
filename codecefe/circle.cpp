#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
  cin>>n;
    int arr[n];
      
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    int j=1;
    if(j<=n){
    
    int k=2;
    for(int i=0;i<n;i++){
        cout<<arr[i+k]<<" ";
        j++;
        if(i==n-){
         i=-1;
         k=2*k;
        }
    }
    }
}