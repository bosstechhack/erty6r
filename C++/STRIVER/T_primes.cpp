#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool isprime(lli k){
     if (k <= 1) {
            return false;
        }
        if (k <= 3) {
            return true;
        }
        if (k % 2 == 0 || k % 3 == 0) {
            return false;
        }
        lli i = 5;
        while (i * i <= k) {
            if (k % i == 0 || k % (i + 2) == 0) {
                return false;
            }
            i += 6;
        }
        return true;
    }


void check(lli c){
    if(c<4){
        cout<<"NO"<<endl;
    }
    else if(c==4 ||c==9){
        cout<<"YES"<<endl;
    }
    else{
        lli i=5;
       lli  count=0;
        while(i*i<=c){
              if (c % (i*i) == 0  ) {
                if(isprime(i)){
                cout<<"YES"<<endl;
                count=1;
                break;
                }
            }
             if(c % (i + 2) == 0){
                if(isprime(i+2)){
                cout<<"YES"<<endl;
                count=1;
                break;

                }
                
                
            }
              i += 6;


        }
        if(count==0){
            cout<<"NO"<<endl;
        }
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
