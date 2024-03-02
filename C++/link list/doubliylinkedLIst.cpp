#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node*next;
    node*prev;
    node(int data){
        value=data;
        next=NULL;
        prev=NULL;
    }
};
class Doublylinklist{
    public:
    node*head;
    node*tail;
    Doublylinklist (){
        head=NULL;
        tail =NULL;
    }
    void insertAtStart(int value){
        node*new_node=new node(value);
        if(head==NULL){
           head=new_node;
           tail=new_node;
           return ;
         
        }

        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
    void insertatEnd(int value){
        node*new_node=new node(value);
      
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return ;
        

    }
    void insertionatkthposition(int k,int value){
        node*new_node=new node(value);
        node*temp=head;
        k-=2;
        while(k--){
            temp=temp->next;
        }
        node*top=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next=top;
        if(top){
            top->prev=new_node;
        }
    }
    void display(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;


    }
   void deleteAtstart(){
    if(head==NULL){
        return;
    }
    node*temp=head;
    head=head->next;
    head->prev=temp->prev;
    delete(temp);
    
   }
   void deleteAttail(){
    if(tail==NULL){
        return;

    }
    node*back=tail;
    tail=tail->prev;
    tail->next=back->next;
    delete(back);

   }
   void deleteAtposition(int k){
    node*temp=head;
    if(head==NULL){
        return;
    }
    k-=2;
   while(k--){
    temp=temp->next;

   }
   node*top=temp->next;
   node*hell=temp->next->next;
   temp->next=hell;
   hell->prev=temp;
   delete(top);
   
   }
   node* reverse(){
   node*p1=head;
   node* p2=tail;
  
   while(p1!=p2 &&p1->prev!=p2){
    int k=p1->value;
    p1->value=p2->value;
    p2->value=k;
    p1=p1->next;
    p2=p2->prev;


   }
   return head;
   }
  bool palindrom() {
   

    node* p1 = head;
    node* p2 = tail;

    while (p1 !=p2&& p1!=p2->prev) {
        if (p1->value != p2->value) {
          
            return false; 
        } else {
            p1 = p1->next;
            p2 = p2->prev;
        }
    }

    return true;
}
void uniqelinkist(){
    node*p1=head;
    while(p1->next!=nullptr){
        if(p1->value==p1->next->value){
            node*del=p1->next;
            node*temp=p1->next->next;
            p1->next=temp;
            temp->prev=p1;
            delete(del);
            
         
        }
        else{
            p1=p1->next;
        }
    }
}
};
int main(){
    Doublylinklist ll1;
    ll1.insertAtStart(1);
    ll1.insertAtStart(3);
    ll1.insertAtStart(4);
    ll1.insertAtStart(8);
    ll1.insertAtStart(10);
    ll1.insertAtStart(0);
    ll1.insertAtStart(2);
    ll1.insertAtStart(1);
        ll1.display();

    ll1.insertionatkthposition(2,4);

    ll1.deleteAtstart();
    ll1.deleteAttail();
    ll1.display();
    Doublylinklist ll2;
    ll2.insertatEnd(1);
     ll2.insertatEnd(2);
      ll2.insertatEnd(2);

      ll1.uniqelinkist();


cout<<ll2.palindrom();
 
}


