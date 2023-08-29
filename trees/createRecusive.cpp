#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* lchild;
    node* rchild;
    node(int data){
        this->data = data;
        this->lchild = NULL;
        this->rchild = NULL;
    }
};
node* create(node* root){
    cout<<"Enter data: ";
    int x;
    cin>>x; 
    root = new node(x);
    if(x==-1) return NULL;
    cout<<"Enter left of "<<x<<" ";
    root->lchild = create(root->lchild);
    cout<<"Enter right of "<<x<<" ";
    root->rchild = create(root->rchild);
    return root;
}
int main(){
    node* root=NULL;
    root=create(root);
    cout<<root->data;
    return 0;
}