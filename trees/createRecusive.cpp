#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* lchild;
    node* rchild;
}*root=NULL;
node* create(){
    node *p = new node;
    root = p;
    int x;
    cout<<"Enter data: ";
    cin>>x; p->data=x;
    if(x==-1) {return NULL;}
    cout<<"Enter left node "<<x<<" ";
    root->lchild = create();
    cout<<"Enter right node "<<x<<" ";
    root->rchild=create();
    return root;
}
int main(){
    node* root = create();
    return 0;
}