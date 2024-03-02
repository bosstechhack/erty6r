#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node*next;

};
class Stack{
    node*head;
    int capacity;
    public:
    
    int curr_size;
    
    
    Stack(int c){
        head=nullptr;
        capacity=c;
        curr_size=0;
    }
    void push(int val){
        node* newnode=new node();
        if(curr_size==capacity){
            cout<<"Stack is overflow"<<endl;
            
        }
        else{
            newnode->value=val;
            newnode->next=head;
            head=newnode;
            curr_size++;
        }

    }
    void pop(){
        if(curr_size==0){
            cout<<"Stack is underflow"<<endl;

        }
        else{
            
            node* top=head;
            head=head->next;
            delete(top);
            curr_size--;
            
        }
    }
int top(){
    if(curr_size==0){
        cout<<"Stack is empty"<<endl;
        return INT_MIN;
    }
    return head->value;
}
bool isEmpty(){
        cout<<endl;
        return curr_size==0;
    }
    
    bool isFull(){
        cout<<endl;
        return curr_size==capacity;

    }

};
int main(){
    int r,c;
    cin>>r>>c;
    Stack st(r);
   vector< vector<int>>v(r, vector<int>(c));
    for(int i=0;i<r;i++){
        st.push(i);
        for(int j=0;j<c;j++){
            int k;
            cin>>k;
            v[i][j]=k;
        }
    }
    while(st.curr_size>1){
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        if(v[a][b]==1){
            st.push(b);
        }
        else {
            st.push(a);
            
        }

    }
    //cheaking if the potencial member is celebrity or not;
    int  p=st.top();
    for(int i=0;i<r;i++){
        
        if((i!=p)&&(v[p][i]==1||v[i][p]==0)){
            cout<<"no celebrity"<<endl;
            return 0;
            
        }
    }
cout<<p+1<<" is celebrity";
}
