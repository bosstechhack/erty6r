#include <iostream>
#include <queue>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int value){
        this->data=value;
        this->left=0;
        this->right=0;
    }
};
Node *builtTree(Node *root){
    cout<<"Enter data:";
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return 0;
    }
    cout<<"Enter data for inserting left:"<<endl;
    root->left=builtTree(root->left);
    cout<<"Enter right data:"<<endl;
    root->right=builtTree(root->right);
    return root;
}
void levelOrderTraversal(Node *root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        
        q.pop();
        if(temp=0){
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
void inorder(Node *root){
    if(root==0){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->left);
}
void preorder(Node *root){
    if(root==0){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root){
    if(root==0){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main()
{
    struct Node *root;
    root=0;
    root=builtTree(root);   
    levelOrderTraversal(root);
    cout<<"\nIn inorder traversal:"<<endl;
    inorder(root);
    cout<<"\nPreorder:"<<endl;
    preorder(root);
    cout<<"\nPostorder:"<<endl;
    postorder(root);
}