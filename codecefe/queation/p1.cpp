#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int n;
    cin>>n;
    while(n>0){
    lli a,b;
    cin>>a>>b;
    lli M=max(a,b);
    lli m=min(a,b);
    lli f;
    if(M%m==0){
        int t=M/m;
        cout<<M*t<<endl;
        }
    
    if(M%m!=0){
        while(m!=0){
             f=m;
            m=M%m;
            M=f;
        }
        lli lcm=(a*b)/f;
         cout<<lcm<<endl;
                
       }
        n--;
    }
    
    return 0;
}
    

