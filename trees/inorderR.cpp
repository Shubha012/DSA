#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* lchild; node* rchild;
    node(int x){
        this->data = x;
        this->lchild = this->rchild = NULL;
    }
}*root;
void create(){
    queue<node*>q;
    node *p,*s,*t; int x;
    cout<<"Enter data: "; cin>>x;
    p = new node(x);  root = p;
    q.push(p);
    while(!q.empty()){
        s = q.front(); q.pop();
        cout<<"Enter left child: "; cin>>x;
        if(x!=-1){
            t = new node(x);
            s->lchild = t;
            q.push(t);
        }
        cout<<"Enter right child: "; cin>>x;
        if(x!=-1){
            t = new node(x);
            s->rchild = t;
            q.push(t);
        }
    }
}
// INORDER.......
void inorder(node *r){
    //cout<<1;
    if(r){
        inorder(r->lchild);
        cout<<r->data<<" ";
        inorder(r->rchild);
    }
}
int main(){
    create();
    inorder(root);
    return 0;
}

