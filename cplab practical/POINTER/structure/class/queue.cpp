#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    for(int i=0;i<5;i++){
        q.push(i+1);
    }
    cout<<q.front()<<endl;;
    cout<<q.size()<<endl;;

    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
     cout<<q.back()<<endl;
    


}