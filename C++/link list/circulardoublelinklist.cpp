#include<bits/stdc++.h>

using namespace std;
class node{
    public:
    char value;
    node*next;
    node*prev;
    node(char data){
        value=data;
        
    }

};
class Circulardoublelist
{
    public:
    node*head;
    node*tail;
    Circulardoublelist(){
        head=nullptr;
        tail=nullptr;

    }
    void insertAtEnd(char v){

        node* newnode=new node(v);

        if(tail==NULL){
            head=newnode;
            tail=newnode;
            newnode->next=newnode;
            newnode->prev=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
            tail->next=head;
            head->prev=tail;
            
        }

    }
    void insertAtstart(char v){

        node* newnode=new node(v);

        if(head==NULL){
            head=newnode;
            tail=newnode;
            newnode->next=newnode;
            newnode->prev=newnode;
        }
        else{
            head->next=newnode;
            newnode->prev=head;
            head=newnode;
            tail->next=head;
            head->prev=tail;
            
        }

    }
    void insertionAtaposition(int p,char v){
        node*newnode=new node(v);
        if(head==nullptr){
            cout<<"List is empty"<<endl;
        }
        node* temp=head;
        p-=1;
        while(p>0 && temp!=nullptr){
            temp=temp->next;

        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next->prev=newnode;
        temp->next=newnode;
        
    }
    void deleteAtend(){
        if(head==nullptr){
            cout<<"linlist is empty";
        }
        else if(head->next==head){
            head=nullptr;
            tail=nullptr;

        }
        node*top=tail;
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        delete(top);

    }
    
    void Display(){
        node*temp=head;
        do{
            cout<<temp->value<<" ";
            temp=temp->next;
        }while(temp!=head);
    }
    
};

int main(){
    Circulardoublelist c;
    int x;
       do{
            cin>>x;
          if(x==1){
            char p;
            cin>>p;
            c.insertAtstart(p);
          }
        else if(x==2){
            c.Display();
        }
        else if(x==3){
            char p;
            cin>>p;
           c.insertAtstart (p);
        }
        else if(x==4){
            char p;
            cin>>p;
            c.insertAtEnd(p);
            c.Display();
        }
        else if(x==5){

            int a,k;
            cin>>a;
            cin>>k;
           c.insertionAtaposition(a,k);
        }
        else if(x==6){
            c.deleteAtend();
            c.Display();
        }
        else if(x==7){
            c.Display();
            // c.Reverse();
            c.Display();

        }
       }while(x!=0);
}
