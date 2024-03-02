#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data){
        value=data;
        next=NULL;
    }
    

};

void insertatHead(Node* &head,int value){
    Node * new_Node =new Node(value);
    new_Node->next =head;
    head=new_Node;

}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

void insertatEnd(Node* &head,int value){
      Node* copy=new Node(value);
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=copy;
      

     }
void insertatkthposition(Node* &head,int pos,int value){
   Node* new_node=new Node(value);
    Node* temp=head;
    if (pos==0){
        insertatHead(head,value);
        return;
    }
    int current_pos= 0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;


}  
void updationAtkthposition(Node* &head,int pos,int value){
    Node*temp=head;
    int current_pos=0;
    while(current_pos!=pos){
        temp=temp->next;
        current_pos++;


    }
     temp->value=value;
} 
void deleteAthead(Node* &head){
     if (head == NULL) {
        cout << "The list is empty. Cannot delete from an empty list." << endl;
        return;
    }
    else if (head->next == NULL) {
        delete(head);
        head = NULL;
        return;
    }
    else{
    Node*temp=head;
    head=head->next;
    delete(temp);
    }
}  
void deleteAtEnd(Node* &head){
     if (head == NULL) {
        cout << "The list is empty. Cannot delete from an empty list." << endl;
        return;
    }
    else if (head->next == NULL) {
        delete(head);
        head = NULL;
        return;
    }
    else{
        Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete(temp->next);
    temp->next = NULL;
  
    }
}
void deleteAtKthposition(Node* &head,int pos){
    if (head == NULL) {
        cout << "The list is empty. Cannot delete from an empty list." << endl;
        return;
    }
    else if(pos==0){
        deleteAthead(head);
    }
    else{
    Node* temp=head;
    Node* top=nullptr;
    int n=0;
    while(n!=pos-1 && temp!=nullptr){
        top=temp;
        temp=temp->next;
        
        n++;
    }
    if (temp == nullptr || temp->next == nullptr) {
            cout << "Invalid position. Node not found." << endl;
            return;
        }

        top->next = temp->next;
        delete temp;
    }
}
void deleteAtAlternate(Node* &head) {
    Node* temp = head;
    
    while (temp != NULL && temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        temp = temp->next;
    }
}


int main(){
   Node* head=NULL;
   insertatHead(head,2);
   display(head);
   insertatHead(head,1);
   display(head);
insertatHead(head,3);
display(head);
insertatEnd(head,5);
display(head);
insertatkthposition(head,1,4);
display(head);
updationAtkthposition(head,1,9);
display(head);
deleteAtAlternate(head);
display(head);




    return 0;
}