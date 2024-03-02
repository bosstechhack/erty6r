#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*right;
    node*left;
    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void levelOrdertransversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

    }
    else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        


    }
    }
}
node* insertintoBTS(node* root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    
        if(d<root->data){
            //should be in left
            root->left=insertintoBTS(root->left,d);

        }
        else{
            root->right=insertintoBTS(root->right,d);
        }
    
    return root;

}
void takeinputs(node* &root) {
    int data;
    
    while (cin >> data && data != -1) {
        root = insertintoBTS(root, data);
    }
}
 void preorder(node*root){
        if(root==NULL){
            return;

        }
         cout<<root->data<<" ";
        preorder(root->left);
       
        preorder(root->right);
    }
      void postorder(node*root){
        if(root==NULL){
            return;

        }
        
        postorder(root->left);
       
        postorder(root->right);
         cout<<root->data<<" ";
    }
      void inorder(node*root){
        if(root==NULL){
            return;

        }
       
        inorder(root->left);
          cout<<root->data<<" ";
       
        inorder(root->right);
    }
void insertion(node* &root, int x) {
    if (root == NULL) {
        root = new node(x);  // Create a new node and make it the root if the tree is empty
        return;
    }
    
    if (x < root->data) {
        if (root->left == NULL) {
            root->left = new node(x);  // Create a new node and set it as the left child
        } else {
            insertion(root->left, x);  // Recursively insert into the left subtree
        }
    } else if (x > root->data) { // Use else if to handle right subtree insertion
        if (root->right == NULL) {
            root->right = new node(x); // Create a new node and set it as the right child
        } else {
            insertion(root->right, x); // Recursively insert into the right subtree
        }
    }
    // Do nothing if x is already present in the tree
}
void maxoftree(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;  
}
   cout<<temp->data<<endl;
}
void minoftree(node* root);
void minoftree(node* root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;  
}
   cout<<temp->data<<endl;
}
bool searchBST(node*,int);
void deletefromBST(node* &root,int p);


int main(){
    node*root=NULL;
    cout<<"Enter data to creat the tree"<<endl;
    takeinputs(root);
    cout<<"printing the BST"<<endl;
    levelOrdertransversal(root);
    cout<<"printing preorder"<<endl;
    preorder(root);
  
    cout<<endl;
     cout<<"printing postorder"<<endl;
    postorder(root);
   
    cout<<endl;
       cout<<"printing inorder"<<endl;//10 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
    inorder(root);
    cout<<searchBST(root,2);
    insertion(root,6);
    levelOrdertransversal(root);
    maxoftree(root);
    minoftree(root);
   
    return 0;

}
bool searchBST( node*root,int x){

if(root==NULL){
    return false;
}
if(root->data==x){
    return true;

}
if(root->data>x){
 return searchBST(root->left,x);
    
}
else{
    return searchBST(root->right,x);

}
}
node* deletefromBST(node* root,int p){
  
if(root==NULL){
    return root ;
}
if(root->data==p){
    if(root->left==NULL && root->right==NULL){
        delete(root);
        return NULL;
    }
    if(root->left!=NULL && root->right==NULL){
        node*temp=root->left;
        delete root;
        return temp;
    }
      if(root->left==NULL && root->right!=NULL){
        node*temp=root->right;
        delete root;
        return temp;
    }
    if(root->left!=NULL && root->right!=NULL){
       int mini=minoftree(root->right)->data;
       
    }
    
 

}
else if(temp->data>p){
deletefromBST(temp->left,p);
    
}
else{
deletefromBST(temp->right,p);

}

}