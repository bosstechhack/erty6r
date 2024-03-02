#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node*left;
    node* right;
    node(int v){
        this->value=v;
        this->left=NULL;
        this->right=NULL;

    }
};
node* BST(node* root,int v){
    if(root==nullptr){
        return new node(v);   
    }
    if(v>root->value){
        root->right=BST(root->right,v);
    }
    else(root->left=BST(root->left,v));
  return root;
}
//find the maximum in Bst
int  maxElement(node*root){
    
    while(root->right!=nullptr){
        root=root->right;

    }
    return root->value;

}
int  minElement(node*root){
    
    while(root->left!=nullptr){
        root=root->left;

    }
    return root->value;

}








//function that print transversal;
void transversal(node* root){
    if(root==nullptr){
        return;
    }
    stack<int >s;
    s.push(root->value);
    while(!s.empty()){
        int temp=s.top();
        cout<<temp<<" ";
        s.pop();
        if(root->left!=nullptr){
            s.push(root->left->value);
        }
        if(root->right!=nullptr){
            s.push(root->right->value);
        
        }


}
}
//deletion of node with one  child
node* NodeWithOneChild(node* &root,int key){
    if(root==nullptr){
        return nullptr  ;
    }
    if(root->value==key){
    if(root->left!=nullptr && root->right==nullptr ){
        
            node*del=root;
            root=root->left;
            
            delete(del);
            return root;

        }
    
    else if(root->left==nullptr && root->right!=nullptr ){
        
            node*del=root;
            root=root->right;
            delete(del);
            return root;

      
    }
    

    }
    else if(root->value>key){
        root->left=NodeWithOneChild(root->left,key);
    }
    else{
        root->right=NodeWithOneChild(root->right,key);

    }
  
    return root;

}
//deletionnwith no child
node* NodeWithNoChild(node*&root,int key){
    if(root==nullptr){
        return nullptr;
    }
    if(root->value==key){
    if(root->left==nullptr && root->right==nullptr){
        
        node*temp=root;
        delete(temp);
        root=nullptr;
        return nullptr;
    }
    
    }
    else if(root->value>key){
        root->left=NodeWithNoChild(root->left,key);

    }
    else{
        root->right=NodeWithNoChild(root->right,key);

    }
    return root;
    
    
}
//deletion with Two child
node* NodeWithTwoChild(node* &root, int key) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->value == key) {
        if (root->left != nullptr && root->right != nullptr) {
            node* del = root;
            int max = maxElement(root->left);
            if (max != root->value) {
                root->value = max;
                root->left = NodeWithNoChild(root->left, max);
            } else {
                 node* temp = root->left;
                root->value = temp->value;
                if (temp->right != nullptr) {
                    root->left = temp->right;
                } else {
                    root->left = temp->left;
                }
                delete temp;
               
            }
            return root;
        }
    } else if (root->value > key) {
        root->left = NodeWithTwoChild(root->left, key);
    } else {
        root->right = NodeWithTwoChild(root->right, key);
    }
    return root;
}

 void preorder(node*root){
        if(root==NULL){
            return;

        }
         cout<<root->value<<" ";
        preorder(root->left);
       
        preorder(root->right);
    }







int main(){
    int n;
    cin>>n;
    while (n==1){
        int e;
        cin>>e;
        vector<int >v(e);
        for(int i=0;i<e;i++){
            
          cin>>v[i];
        }
        //built bineay search tree
        node* root=nullptr;
        
        for(int i=0;i<e;i++){
            root=BST(root,v[i]);
        }

        int p;
        cin>>p;
        switch(p){
            case 2:
            //delete node that have no child
            int key1;
            cin>>key1;
            root=NodeWithNoChild(root,key1);
            preorder(root);
            break;


            case 3:
            int key2;
            cin>>key2;
            root=NodeWithOneChild(root,key2);
            preorder(root);
            break;
            //delete node that have one child
            case 4:
            int key3;
            cin>>key3;
            root=NodeWithTwoChild(root,key3);
            preorder(root);
            break;
            //delete node that have two child

        }
        //print transvers of the result BST;



        cin>>n;
        
    }
}