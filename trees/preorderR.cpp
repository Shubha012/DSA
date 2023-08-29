#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* lchild;
    node* rchild;
    node(int x){
        this->data = x;
        this->lchild = this->rchild = NULL;
    }
}*root;
void create(){
    queue<node*> q;
    node* p, *t, *s;
    int x;
    cout<<"Enter data: "; cin>>x;
    p = new node(x); root = p;
    q.push(p);
    while(!q.empty()){
        s = q.front(); q.pop();
        cout<<"Enter left child  "; cin>>x;
        if(x!=-1){
            t = new node(x);
            s->lchild = t;
            q.push(t);
        }
        cout<<"Enter right child  "; cin>>x;
        if(x!=-1){
            t = new node(x);
            s->rchild = t;
            q.push(t);
        }
    }
}

//.................PREORDER..............

void preorder(node *r){
    if(r){
    cout<<r->data<<" ";
    preorder(r->lchild);
    preorder(r->rchild);}
}
int main(){
    create();
    //  cout<<root;
    preorder(root);
    return 0;
}