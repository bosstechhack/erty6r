#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while(n--){
        lli l;
        cin>>l;
        vector<pair<int, int>>v;
        int d;
        cin>>d;
        v.push_back(make_pair(d,1));
        for(lli i=2;i<=l;i++){
            int c;
            cin>>c;
            if(d!=c){
                v.push_back(make_pair(c,i));
            }
           
        }
        lli q;
        cin>>q;
        while(q--){
            lli a,b;
            cin>>a>>b;
            int count=0;
            for(lli i=0;i<v.size();i++){
                if(v[i].second>=a && v[i].second<=b){
                    if(v[i+1].second>=a && v[i+1].second<=b && v[i].first!=v[i+1].first){
                        count=1;
                        cout<<v[i].second<<" "<<v[i+1].second<<endl;
                        break;
                    }
                }
                
            }
            if(count==0){
                cout<<"-1"<<" "<<"-1"<<endl;
            }
        }
    }

    
}