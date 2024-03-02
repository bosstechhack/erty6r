#include<bits/stdc++.h>

using namespace std;
class node{
    public:
    int value;
    node*next;
    node(int data){
        value=data;
        next=NULL;
    }
};
class CircularLinkedlist{
    public:
    node*head;
    CircularLinkedlist(){
        head=NULL;
    }
    void display(){
        node* temp=head;
        do{
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        while(temp!=head);
        cout<<endl;

    }
    void printCircular(){
        node* temp =head;
        for(int i=0;i<15;i++){
            cout<<temp->value<<"->";
            temp=temp->next;
        }cout<<endl;
    }
    void FindtheLengthodCircularlinkedlist(){
        node*temp=head;
      int count=0;
    while(temp->next!=head){
        temp=temp->next;
        count++;
    }
    cout<<count;
    }
    void insertatkthposition(int val ,int k){
        node*new_node=new node(val);
        node*temp=head;
        k=k-2;
        while(k>0 && temp!=NULL){
            temp=temp->next;
            k--;
        }
        node*top=temp->next;
        temp->next=new_node;
        new_node->next=top;
        
        

    }
    void insertAttheEnd(int val){
        node* new_node=new node(val);
        node* temp=head;
        while(temp->next!=head){
            temp=temp->next;

        }
        temp->next=new_node;
        new_node->next=head;
    }
    void insertAtStart(int val){
    node*new_node=new node(val);{
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        node* tail=head;
        while(tail->next!=head){
            tail=tail->next;

        }
        tail->next=new_node;
        new_node->next=head;
        head=new_node;
    }
}
void delteAtthestart(){
    if(head==NULL){
        return ;

    }
    node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node*top=head;
    head=head->next;
    temp->next=head;
    delete(top);


    
}
void deleteAtEnd(){
    node*tail=head;
    while(tail->next->next!=head){
        tail=tail->next;

    }
    node* extra=tail->next;
    tail->next=head;
    delete(extra);
}
void updationOfnode(int n,int val)
{
    node*temp=head;
    n-=1;
    while(n--){
        temp=temp->next;
    }
    temp->value=val;

}
void deleteAtKthposition(int k){
    if(head==NULL){
        return ;
    }
    node*temp=head;
    k-=2;
    while(k>0&&temp!=NULL){
        temp=temp->next;
        k--;
    }
    node*top=temp->next;
    temp->next=temp->next->next;
    delete(top);


}
};
int main(){
    CircularLinkedlist cl1;
    cl1.insertAtStart(3);
    cl1.insertAtStart(4);
    cl1.insertAtStart(7);
    cl1.insertAtStart(1);
    cl1.insertAtStart(9);
    cl1.insertAtStart(0);
    cl1.insertAtStart(8);
    
 
    cl1.insertatkthposition(2,2);
    cl1.display();
    cl1.insertAttheEnd(9);
    cl1.display();
    cl1.deleteAtKthposition(3);
    cl1.display();
    cl1.deleteAtEnd();
    cl1.display();
    cl1.delteAtthestart();

    cl1.display();
    cl1.updationOfnode(3,0);
    cl1.display();


}

