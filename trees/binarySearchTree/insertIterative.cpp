#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* lchild; node* rchild;
    node(int data){
        this->data = data;
        this->lchild = this->rchild = 0;
    }
}*root;
void create(){
    node* p, *t;
    int x;
    queue<node*>q;
    cout<<"Enter data: "; cin>>x;
    p = new node(x);
    root = p;
    q.push(p);
    while(!q.empty()){
        p = q.front(); q.pop();
        cout<<"Enter left child: "; cin>>x;
        if(x!=-1){
            t = new node(x);
            p->lchild = t;
            q.push(t);
        }
        cout<<"Enter right child: "; cin>>x;
        if(x!=-1){
            t = new node(x);
            p->rchild = t;
            q.push(t);
        }
    }
}
void insert(int key, node* p){
    node *t;
    while(p){
        t = p;
        if(key==p->data)
            return ;
        else if(key<p->data)
            p = p->lchild;
        else if(key>p->data)
            p = p->rchild;
    }
    p = new node(key);
    if(key<p->data)
        t->lchild =p;
    else    
        t->rchild = p;
}

void display(node *r){
    if(r){
        display(r->lchild);
        cout<<r->data<<" ";
        display(r->rchild);
    }
}
int main(){
    create();
    display(root);
    insert(38,root);
    display(root);
    return 0;
}