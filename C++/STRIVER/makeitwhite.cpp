#include<bits/stdc++.h>
using namespace std;
typedef long int li;
int main(){
    li n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        li i=0;
        while(s[i]!='B'){
            i++;
        }
        li j=l;
        while(s[j-1]!='B'){
            j--;
        }
        li k=abs(j-i);
        cout<<k<<endl;



    }
}