#include<bits/stdc++.h>
using namespace std;
struct node{
    char data;
    struct node* prev;
    struct node*next;
};
struct node*head=NULL;
void inser_start(char x){
    
    struct node* temp = new struct node;
   
    struct node*ptr=head;
       if (head == NULL) {
        temp->data=x;
        temp->next = temp;
        temp->prev = temp;
        head = temp;
        return;  
    }
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    temp->data=x;
    temp->next=head;
   head->prev=temp;
    temp->prev=ptr;
    ptr->next=temp;
   head=temp;
}
void inser_after_value(char x,char y){
    struct node* temp = new struct node;
   
    struct node*ptr=head;
    temp->data=y;
    while(ptr->data!=x){
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->prev=temp;
    ptr->next=temp;
    temp->prev=ptr;

}
void insert_end(char x){
      struct node* temp = new struct node;
   
    struct node*ptr=head;
    if(head==NULL){
        temp->data=x;
        temp->next=temp;
        temp->prev=temp;
        head=temp;

    }
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    temp->data=x;
    ptr->next=temp;
    temp->next=head;
    head->prev=temp;
    temp->prev=ptr;
    // head=temp;
}
void print_list(){
    struct node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

void print_reverse() {
    struct node* temp = head->prev;
    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != head->prev);
    cout << endl;
}
void delete_start(){
    if(head==NULL){
        cout<<"list is empty.....";
        return;
    }
    struct node*ptr=head;
     struct node*temp=head;
     while(ptr->next!=head){
        ptr=ptr->next;
     }
     ptr->next=temp->next;
     temp->next->prev=ptr;
     head=ptr->next;
     
}
void delete_end(){
 if (head == NULL) {
        std::cout << "List is empty..." << std::endl;
        return;
    }

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    struct node* ptr = head;
    while (ptr->next != head) {
        ptr = ptr->next;
    }

    ptr->prev->next = head;
    head->prev = ptr->prev;
    delete ptr;
}
void insert_after_position(int x){
       struct node *ptr=head;
       struct node* temp = new struct node;
       while(x>1){
        ptr=ptr->next;
        x--;
       }
       char k;
       cin>>k;
      temp->data=k;
      temp->next=ptr->next;
      ptr->prev=temp;
      ptr->next=temp;
      temp->prev=ptr->next;
}
int main(){
    int x;
       do{
            cin>>x;
          if(x==1){
            char p;
            cin>>p;
            inser_start(p);
          }
        else if(x==2){
            print_list();
        }
        else if(x==3){
            char p;
            cin>>p;
            inser_start(p);
        }
        else if(x==4){
            char p;
            cin>>p;
            insert_end(p);
            print_list();
        }
        else if(x==5){
            int a;
            cin>>a;
            insert_after_position(a);
        }
        else if(x==6){
            delete_end();
            print_list();
        }
        else if(x==7){
            print_list();
            print_reverse();

        }
       }while(x!=0);
}