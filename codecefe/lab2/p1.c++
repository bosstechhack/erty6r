#include<bits/stdc++.h>
using namespace std;


int main(){
stack<int>s[4];
int t=0;
cout<<"Enter the number"<<endl;
while(t>=0 && t<=4){
int n;
cin>>n;
s[t].push(n);
t++;
if (t==4){
    cout<<"overflow";
}
}
cout<<"10 20 30 40";
t--;

while(t>=-1){
    int k=s[0].size();
    s[t].pop();
    for(int i=0;i<k;i++);


}
}









