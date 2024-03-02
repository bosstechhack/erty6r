#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;

    while(n--){
    lli s;
     cin>>s;
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    lli arr[s];
    lli t=0;
    lli count=0;
    for(lli i=0;i<s;i++){
        count=0;
        if((s1[i]==s2[i]&&s2[i]==s3[i])||(s1[i]!=s2[i]&&s1[i]!=s3[i]&&s2[i]!=s3[i])||(s1[i]==s2[i]&&s2[i]!=s3[i])){
            arr[t]=0;
            t++;
            count=0;
        }
        else {
            arr[t]=1;
            t++;
            count=1;
            break;
            
        }
    }
    if(count==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
    }
    
    
}