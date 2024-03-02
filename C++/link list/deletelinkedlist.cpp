#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node*next;
    node (int data){
        value =data;
        next=NULL;
    }

};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}
void displayinreverseorder(node*head ){
  if(head==NULL){ cout<<"NULL ->";return;}
  displayinreverseorder(head->next);
  cout<<head->value<<"->"; 
    
}
void insertionathead(node* &head ,int val){
node*temp=new node(val);
temp->next=head;
head=temp;
}
void deleteTheDublicateNode(node* &head){
    node*temp=head;
    while(temp!=NULL &&temp->next!=NULL){
        if(temp->value==temp->next->value){
            node*top=temp->next;
            temp->next=temp->next->next;
            
            delete(top);

        }
        else{
            temp=temp->next;
        }
    }
}
void sort(node* &head){
    
    node*top=head;
    while(top!=NULL){
     node*temp=head;
    while(temp!=NULL&&temp->next!=NULL){
        if(temp->value>temp->next->value){
            int k=temp->value;
            temp->value=temp->next->value;
            temp->next->value=k;
        }
        temp=temp->next;
    }
    top=top->next;
    }
}
void reverseTheLink(node* &head) {
    if (head == NULL || head->next == NULL) {
        // If the list is empty or has only one node, no need to reverse
        return;
    }

    node* prev = NULL;
    node* current = head;
    node* nextNode = NULL;

    while (current != NULL) {
        nextNode = current->next;  // Save the next node
        current->next = prev;      // Reverse the link

        // Move to the next pair of nodes
        prev = current;
        current = nextNode;
    }

    head = prev;  // Update the head to the new start of the reversed list
}
node* recursiveRecursion(node* &head) {

    // Base case: if the list is empty or has only one node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursive case: reverse the rest of the list
    node* new_head = recursiveRecursion(head->next);

    // Update the links to reverse the current pair of nodes
    head->next->next = head;
    head->next = NULL;

    // Return the new start of the reversed list
    return new_head;
}
node* reverrecll(node* &head,int k){
    node*prevptr=NULL;
    node*currptr=head;
    int count=0;
    while(currptr!=nullptr&&count<k){
        node*Nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=Nextptr;
        count++;

    }
    if(currptr!=NULL){
        node*new_head=reverrecll(currptr,k);
        head->next=new_head;
    }
    return prevptr;
}


int main(){
    node*head=NULL;
    insertionathead(head,2);
    insertionathead(head,3);
    insertionathead(head,15);
    insertionathead(head,5);
    insertionathead(head,7);
    insertionathead(head,5);
    insertionathead(head,9);
    insertionathead(head,5);
    insertionathead(head,51);
          

    insertionathead(head,7);
    insertionathead(head,8);
    insertionathead(head,12);
    insertionathead(head,2);
    insertionathead(head,12);
    insertionathead(head,21);
    insertionathead(head,67);
    insertionathead(head,0);
     display(head);
    
    head=reverrecll(head,2);
    display(head);


}
