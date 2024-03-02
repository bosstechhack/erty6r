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
    int currsize;
    public:
    Stack(int c){//this is differenciating  class member variable;
       capacity=c;
       currsize=0;
       head=nullptr;
    }
    void push(int data){
        if(currsize<capacity){
            node* newNode= new node();
            newNode->value=data;
            newNode->next=head;
            head=newNode;
            currsize++;

        }
        else{
            cout<<endl<<"Stack is OverFlow";
        }
    }
    int pop(){
        if(currsize==0){
            cout<<endl<<"Stack is UnderFlow";
            return INT_MIN;
        }
        else{
            node* del=head;
            int k=head->value;
            head=head->next;
            delete(del);
            return k;


        }
        
    }
    int top(){
        if(head==nullptr){
            cout<<endl<<"Stack is Underflow";
            return INT_MIN;
        }
        cout<<endl;
        return head->value;
    }
    bool isEmpty(){
        cout<<endl;
        return currsize==0;
    }
    bool isFull(){
        cout<<endl;
        return currsize==capacity;

    }

    
 };
 int main(){
    Stack st(5);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top();
    st.push(6);
    cout<<st.top();
    st.push(7);
    cout<<st.top();
    
    cout<<st.isEmpty();
    cout<<st.isFull();
    cout<<st.top();
    st.pop();
    cout<<st.top();
    st.pop();
    cout<<st.top();
    st.pop();
    cout<<st.top();
    st.pop();
    cout<<st.top();
    st.pop();
    cout<<st.top();


 }
