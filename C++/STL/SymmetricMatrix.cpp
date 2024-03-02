#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    lli n;
    cin>>n;
    while(n--){
        lli a,b;
        cin>>a>>b;
       
        int count=0;
        while(a--){
            vector<vector<int>>v(2, vector<int>(2));
            for(lli i=0;i<2;i++){
                for(lli j=0;j<2;j++){
                    lli k;
                    cin>>k;
                    v[i][j]=k;
                }
            }
            if(v[1][0]==v[0][1]){
                count=1;
                
            }

        }
         if(b%2==1){
            cout<<"NO"<<endl;
          
            
        }
        else if(count==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

    
}