//delete array between two number
#include<iostream>
using namespace std;

int main(){

    int a[]={1,2,3,4,5,6,7};
      int s=sizeof(a)/sizeof(a[0]);
      cout<<"position at which element should be remove"<<endl;
      int t;
      cin>>t;
      t--;
      for(int i=t;i<s;i++ ){
        a[i]=a[i+1];
      }
      for(int i=0;i<s-1;i++){
        cout<<a[i];
      }
    
    return 0;
}