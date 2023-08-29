#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node *lchild; node* rchild;
    node(int x){
        this->data  = x;
        this->lchild = this->rchild = NULL;
    }
}*root=NULL;
void create(){
    queue<node*>q;
    node *p,*s,*t; int x;
    cout<<"Enter data: ";
    cin>>x;
    p = new node(x);
    root =p;
    q.push(p);
    while(!q.empty()){
        s = q.front(); q.pop();
        cout<<"Enter left child: ";
        cin>>x;
        if(x!=-1){
            t = new node(x);
            s->lchild = t;
            q.push(t);
        }
        cout<<"Enter right child: ";
        cin>>x;
        if(x!=-1){
            t = new node(x);
            s->rchild = t;
            q.push(t);
        }
    }
}
void preorderR(node *r){
    if(r){
        cout<<r->data<<" ";
        preorderR(r->lchild);
        preorderR(r->rchild);
    }
}

// ITREATIVE VERSION OF PREORDER
void preorderI(node *r){
    stack<node*>s;
    while(r!=NULL || !s.empty()){
        if(r!=NULL){
            cout<<r->data;
            s.push(r);
            r = r->lchild;
        }
        else{
            r = s.top(); s.pop();
            r = r->rchild;
        }
    }
}
int main(){
    create();
    preorderR(root);
    preorderI(root);
    return 0;
}