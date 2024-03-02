#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while(n--){
        lli a;
        cin>>a;
        lli arr[a];
        lli M;
        long double p=1;
        for(lli i=0;i<a;i++){
            cin>>arr[i];
            p=p*arr[i]; 
        }
        lli c=0;
        if(p<=0){
            cout<<"0"<<endl;
        }
        else{
            M=arr[0];
            c=0;
            for(lli j=0;j<a;j++){
                if(M<arr[j]){
                    c=j;
                 M=arr[j];
                 
                }   
            }
            
                cout<<"1"<<endl;
                cout<<c+1<<" "<<"0"<<endl;
        
            }
        }
        
    }

