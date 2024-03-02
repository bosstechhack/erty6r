#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli k;
    cin>>k;
    while(k>0){
    lli r,c;
    cin>>r>>c;
    lli a,b,t,d;
    cin>>a>>b>>t>>d;
    
            if((a==1&&b==1)||(a==1&&b==c)||(a==r&&b==1)||(a==r&&b==c))
            cout<<"2"<<endl;
            else if((t==1&&d==1)||(t==1&&d==c)||(t==r&&d==1)||(t==r&&d==c))
            cout<<"2"<<endl;

            else if(((a==1||a==r)||(b==1||b==c))||((t==1||t==r)||(d==1||d==c))){
                cout<<"3"<<endl;
            }
            else{
                cout<<"4"<<endl;
            }
   k--;
    }
  
 
}