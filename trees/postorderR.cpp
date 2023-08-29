#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *lchild;
    node *rchild;
    node(int d){
        this->data = d;
        this->lchild = this->rchild = 0;
    }
}*root;
void create(){
    queue<node*>q;
    node *p, *s,*t; int x;
    cout<<"Enter data: "; cin>>x;
    p = new node(x); root = p;
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

//POSTORDER
void postorder(node* r){
    if(r){
        postorder(r->lchild);
        postorder(r->rchild);
        cout<<r->data;
    }
}
int main(){
    create();
    postorder(root);
    return 0;
}

