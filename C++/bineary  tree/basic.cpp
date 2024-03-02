#include<bits/stdc++.h>
using namespace std;
class node{
    public:

    node* left=nullptr;
    node* right=nullptr;
    int value;
    node(int data){
        value=data;
    }
};
node*buildBinearytree(){
    cout<<"Enter data(-1 for NULL)"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return nullptr;

    }
    node*root=new node(data);
    cout<<"Enter left data for "<<data<<":"<<endl;
    root->left=buildBinearytree();
    cout<<"Enter right data for "<<data<<":"<<endl;
    root->right=buildBinearytree();
    return root;

}
void levelOrderTraversal(node* &root){
    if(root==nullptr){
        return ;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        cout<<temp->value<<" ";
        if(temp->left!=nullptr){
            q.push(temp->left);
        }
        if(temp->right!=nullptr){
            q.push(temp->right);
        }


    
    }

}
void inorder(node*root){
    if(root==nullptr){
        return ;

    }
    inorder(root->left);
    cout<<root->value<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==nullptr){
        return ;
    }
    cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==nullptr){
        return ;

    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->value<<" ";
}
int main(){
    node* root=buildBinearytree();
    cout<<"Level Ordeer Traversal:"<<endl;
    levelOrderTraversal(root);
     cout<<"\nInorder Traversal:"<<endl;
    inorder(root);
    cout<<"\nPreorder Traversal:"<<endl;
    preorder(root);
    cout<<"\nPostorder Traversal:"<<endl;
    postorder(root);
    return 0;

}