#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


void check(lli c){
     
        if (c <= 3) {
            cout<<"NO"<<endl;
        }
        else if ((c % 2 == 0||c%3==0||c%5==0||c%7==0) && (c != 4 &&c!=9&&c!=49)) {
            cout<<"NO"<<endl;
        }
        else if(c==4 || c==9||c==49){
            cout<<"YES"<<endl;
        }
        else{
        lli i=11;
        while(i*i<=c){
              if (c % (i*i) == 0  ) {   
                cout<<"YES"<<endl;  
                return ;    
            }
            else if(c % ((i + 2)*(i+2)) == 0){
                
                cout<<"YES"<<endl;
             
                return ;  
            }
              i += 6;


        }
        cout<<"NO"<<endl;
    }
        



}
//we have to find that number which has exactly 1 factor other than 1 & it self;
int main(){
    lli n;
    cin>>n;
    vector<lli>v;
    for(int i=0;i<n;i++){
        lli k;
        cin>>k;
        v.push_back(k);
    }
    for(lli i=0;i<n;i++){
        check(v[i]);
    }

   


}
