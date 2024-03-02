#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        lli i=0;
        
         vector<pair<char, lli>>v;
         vector<lli>v1;
         vector<lli>v2;
        lli t=0,b=0;
       for (t = 0; t < s.size(); t++){
            char k=s[t];
           
            if(k=='b'){
                if(!v.empty()&&( !v1.empty())){
                    v[v1.back()].second=-1;
                    v1.erase(v1.end()-1);
                }
            }  
            else if(k=='B'){
                if(!v.empty()&& (!v2.empty())){
                    v[v2.back()].second=-1;
                    v2.erase(v2.end()-1);
                }     
             }   
            
            else if(k>='a'&&k<='z'){
                
               
                v.push_back({k,0});
                v1.push_back(b);
                b++;
            }
            else if(k>='A'&&k<='Z'){
              
                v.push_back({k,1});
                v2.push_back(b);
                b++;
            }
          
         }
         for (const auto& p : v) {
           if(p.second!=-1){
            cout <<p.first;}
            }
            cout<<endl;
           
        }
        
        
        
    }




 // vector<pair<char, lli>>v;
        // char k;
        // cin >>k;
        // if(k=='b'){
        //     if(v.empty()){
                
        //     }
        //     for(auto& pair : v)

        // }
        // else if(k>='a'&& k<='z'){
        //     v.push_back({k,0});
        // }
        // else if(k>='A' && k<='Z'){
        //     v.push_back({k,1});

        // }
           //    for (lli j = v.size()-1; j >=0; j--) {
                //         if (v[j].second == 1) {
                //             v[j].second=-1;
                //             C--;
                //             continue;
                          
                            
                //         }
                //     }
                      //   for (lli j = v.size()-1; j >=0; j--) {
                //         if (v[j].second == 0) {
                //             v[j].second=-1;
                //             c--;
                //             continue;
                          
                            
                //         }
                //     }