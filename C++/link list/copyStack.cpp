#include<bits/stdc++.h>
using namespace std;
stack<int> copystack(stack<int>input){
    stack<int>temp;
    while(!input.empty()){
        int curr=input.top();
        temp.push(curr);
        input.pop();

    }
    stack<int>final;
    while(!temp.empty()){
        int curr=temp.top();
        final.push(curr);
        temp.pop();

    }
    return final;
}
    
    int main(){
        stack<int >st;
        int n;
        cin>>n;
        int p=n;
        while(n--){
            int k;
            cin>>k;
            st.push(k);
        }
        stack<int>copy;
        copy=copystack(st);
        while(p--){
            cout<<copy.top()<<endl;
            copy.pop();
        }


    }
    

    


