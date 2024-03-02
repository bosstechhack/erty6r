#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main(){
    vector<char>vc={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    lli n;
    cin>>n;
    while(n--){
        string s;
        lli l;
        cin>>l;
      
        vector<pair<char, int>>dv;
        int j=0;
        for(lli i=0;i<l;i++){
            int p;
            cin>>p;
            
            if(p==0){
                dv[j]={vc[j],1};
                
                s.push_back(vc[j]);
                j++;

            }
            else{
                for(int k=0;k<dv.size();k++){
                    if(p==dv[k].second){
                        s.push_back(dv[k].first);
                        dv[k].second+=1;
                        break;
                    }
                }
            }
            
        }
        cout<<s<<endl;
    }
    return 0;
    

}