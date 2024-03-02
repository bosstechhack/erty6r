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
class LinkedList{
    public:
    node*head;
    LinkedList(){
        head=NULL;
    }
    void insert(int value){
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
            
        }
        cout<<"NULL"<<endl;
    }
   void sort(){
    
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

};

bool checkEquallinklist(node* &head1,node*head2){
    node*ptr1=head1;
    node*ptr2=head2;
    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1->value!=ptr2->value){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return (ptr1==NULL && ptr2==NULL);
}
int getlength(node* &head){
    int count=0;
    node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
node* intersectionNode(node* &head1,node*&head2){
    node* ptr1=head1;
    node* ptr2=head2;
    int l1=getlength(head1);
    int l2=getlength(head2);
    int d=abs(l2-l1);
 
    if(l1>l2){
         while(d--){
            ptr1=ptr1->next;
         }
    }
    else{
        while(d--){
            ptr2=ptr2->next;
         }
        
    }
    while(ptr1!=NULL&&ptr2!=NULL){
     if(ptr1==ptr2){
       
        return ptr1;
     }  
     ptr1=ptr1->next;
     ptr2=ptr2->next; 
    
    
    }
    return NULL;
}
void removeKThnodefromEnd(node* &head,int k){
    node* temp=head;
    node*top=head;
    
    while(k--){
        top=top->next;
    }
    while(top->next!=NULL){
        temp=temp->next;
        top=top->next;
    }
    node*kela=temp->next;
    temp->next=temp->next->next;
    delete(kela);
    

}
node* sortAndmergetwoarray(node *&head1,node*&head2){
    node*p1=head1;
    node*p2=head2;
    
    node* dummy=new node(-1);
    node* p3=dummy;
   
    while(p1!=NULL &&p2!=NULL){
        if(p1->value>p2->value){
            p3->next=p2;
            p2=p2->next;

        }
        else if(p2->value>=p1->value){
            p3->next=p1;
            p1=p1->next;

        }
        p3=p3->next;
       
    }
    if(p1){
     p3->next=p1;
    
    }
    else if(p2){
        p3->next=p2;
      
    }
    
    return dummy->next;
}
node* mergelinkedlists(vector<node*>& lists) {
    while (lists.size() > 1) {
        node* mergehead = mergelinkedlists(lists[0], lists[1]);
        lists.push_back(mergehead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists.empty() ? nullptr : lists[0];
}

int main(){
   LinkedList ll1;


    ll1.insert(1);
    ll1.insert(12);
    ll1.insert(7);
    ll1.insert(4);
    ll1.insert(5);
    ll1.sort();
    ll1.display();
    LinkedList ll2;
    ll2.insert(6);
    ll2.insert(17);
    ll1.sort();

    ll2.display();
    

    
   LinkedList ll3;
    

      ll3.head=sortAndmergetwoarray(ll1.head,ll2.head);
      ll3.display();

      
      

return 0;
}
