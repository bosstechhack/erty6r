#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while(n--){
    lli a,b,t,f;
    cin>> a>>b;
    
    if(b%2==0){
        t=b/2;
        f=t*a;

    }
    else{
        b-=3;
        t=(b/2)+1;
        f=t*a;
    }
    cout<<f<<endl;
    }
}
