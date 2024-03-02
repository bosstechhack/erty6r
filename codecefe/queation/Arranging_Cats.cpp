#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;
  
   lli n;
   cin>>n;
   while(n>0){
 
    
    lli c=0;
    lli C=0;
    cin>>t;

char si[t];
char sf[t];
for(lli i=0;i<t;i++){
    cin>>si[i];
}
for(lli j=0;j<t;j++){
    cin>>sf[j];
}
for(lli k=0;k<t;k++){
    if(si[k]=='1'&& sf[k]=='0'){
        c++;
    }
    else if(si[k]=='0'&&sf[k]=='1'){
        C++;
    }
   
}
 if(c>C){
        cout<<c<<endl;
    }
    else if(c<C){
        cout<<C<<endl;;
    }
    else if(c=C){
        cout<<c<<endl;
    }
    else{
        cout<<"0"<<endl;
    }

n--;
   }
    


}