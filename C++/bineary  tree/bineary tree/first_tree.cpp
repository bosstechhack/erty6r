#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int value){
        this->data=value;
        left=NULL;
        right=NULL;

    }
};
node* buildtree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
{
    return NULL;
}
cout<<"Enter data for inserting in left "<<data<<endl;
root->left=buildtree(root->left);
cout<<"Enter data for inserting in right "<<data<<endl;
root->right=buildtree(root->right);

return root;

}

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
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
node* bulidfromlevelorder(node* &root){
    queue<node*>q;
    int data;
    
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
    cout<<"Enter the left node for"<<temp->data<<endl;
    int leftdata;
    cin>>leftdata;
    if(leftdata!=-1){
        temp->left=new node(leftdata);
        q.push(temp->left);

    }
    cout<<"Enter right node for:"<<temp->data<<endl;
    int rightdata;
    cin>>rightdata;
    if(rightdata!=-1){
        temp->right=new  node(rightdata);
        q.push(temp->right);
    }



//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    }
return root;

}
    int cinorder(node*root,int &count){
        if(root==NULL){
            return 0;

        }
       
        cinorder(root->left ,count);
        if(root->left==NULL && root->right==NULL){
            count++;
        }
       
        cinorder(root->right,count);
       
        return count;
    }



main(){
    node*root=NULL;
    root=bulidfromlevelorder(root);
   
    levelOrdertransversal(root);
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    int count=0;
    int p=cinorder(root,count);
    cout<<p<<endl;

    return 0;
}


