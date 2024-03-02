#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
 
        int count=0;
    lli k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    for(lli i=1;i<=d;i++){
        if(i%k!=0){
            if(i%l!=0){
                if(i%m!=0){
                    if(i%n!=0){
                        count++;
                    }
                }
            }
        }
    }
    cout<<d-count<<endl;

    
    


}