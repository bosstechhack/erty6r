#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
   lli n;
    cin>>n;
    while(n--){
    
    int s,k,x;
    cin>>s>>k>>x;
    vector<int>v(s);
    for(int i=0;i<s;i++){
        cin>>v[i];  
    }
    sort(v.begin(),v.end());
    int a=0;
    vector<int>v1(s);
    for(int i=0;i<s;i++){//loop
        a=a+v[i];
        v1[i]=a;   
    }
    
    
        vector<int>v3;
   
    for(int i=0;i<=k;i++){
        if((s-1-x-i)>=0){
        int l=v1[s-1-i]-v1[s-1-x-i];
        int c=v1[s-1-x-i]-l;
        v3.push_back(c);

        }
        else if((s-1-i)>=0){
            v3.push_back(-1*v1[s-1-i]);
        }
        
    }
    if(s==k){
            v3.push_back(0);
        }
    sort(v3.begin(),v3.end());
     
       cout<< v3[v3.size()-1]<<endl;
  
    }
    
    
    }  
