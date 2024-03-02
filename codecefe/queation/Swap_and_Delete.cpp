#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while(n>0){
     lli c,C,p=0;
     string s1;
     cin>>s1;
     lli s=s1.size();
     vector<char>s2;
     vector<int>v1;
     for(lli i=0;i<s;i++){
        s2[i]=s1[i];
        if(s1[i]=='0'){
            c++;
        }
        else if(s1[i]=='1'){
            C++;
            v1.push_back(i);
        }
     }
     lli d=abs(c-C);
     if(c==C){
        cout<<"0";
     }
     else{
        for(lli i=0;i<d;i++){
            v1.erase()
        }



     }

     


     



    }





}