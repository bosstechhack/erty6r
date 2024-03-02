#include<bits/stdc++.h>
using namespace std;
int main(){
//     vector<int>v;
// int n;
// for(int i=0;i<5;i++){    
// cin>>n;
// v.push_back(n);
// }
      
    
// v.clear();
//    for(auto it:v){
//     cout<<it<<" ";
//    }
stack<int>s;
int n;
for(int i=0;i<5;i++){
    cin>>n;
    s.push(n);
}
for(int i=0;i<5;i++){
    cout<<s.top()<<" ";
   
    cout<<s.size()<<" ";
     s.pop();
    cout<<s.empty()<<endl;

}
cout<<s.empty();


}
