#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while(n--){
        lli a,b,k;
        cin>>a>>b>>k;
        set<int>s1;
        set<int>s2;
        for(int i=0;i<a;i++){
            lli e;
            cin>>e;
            if(e>0&&e<=k){
                s1.insert(e);
            }
        }
        for(int i=0;i<b;i++){
            lli f;
            cin>>f;
            if(f>0&&f<=k){
                s2.insert(f);
            }
        }
        if(s1.size()<k/2 ||s2.size()<k/2){
            cout<<"NO"<<endl;
             continue;
        }
        else{
             for (auto it = s1.begin(); it != s1.end();) {
        // Check if the element exists in set2
        if (s2.find(*it) != s2.end()) {
            int p=s1.size();
            int t=s2.size();
            if(p>t){
            // If it does, erase the element from set1
            it = s1.erase(it);}
            else{
                s2.erase(*it++);

            }
        } else {
            // Otherwise, move to the next element
            ++it;
        }
    }
    if(s1.size()==k/2&&s2.size()==k/2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

            
            

        }
       
        
    }

}