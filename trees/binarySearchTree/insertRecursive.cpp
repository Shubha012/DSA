#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* lchild; node* rchild;
    node(int data){
        this->data = data;
        this->lchild = this->rchild = NULL;
    }
}*root;
void create(){
    node *p, *t; int x;
    queue<node*>q;
    cout<<"Enter data: "; cin>>x;
    p = new node(x); root =p;
    q.push(p);
    while(!q.empty()){
        p = q.front(); q.pop();
        cout<<"Enter left child: "; cin>>x;
        if(x!=-1){
            t = new node(x);
            p->lchild = t; q.push(t);
        }
        cout<<"Enter right child: "; cin>>x;
        if(x!=-1){
            t = new node(x);
            p->rchild = t; q.push(t);
        }
    }
}
void inorder(node* r){
    if(r){
        inorder(r->lchild);
        cout<<r->data<<" ";
        inorder(r->rchild);
    }
}

node * insert(int key, node* p){
    node *t;
    if(p==0){
        t = new node(key);
        return t;
    }
    // else if(key==p->data){
    //     return NULL;
    // }
    else if(key<p->data)
        p->lchild=insert(key, p->lchild);
    else if(key>p->data)
        p->rchild = insert(key, p->rchild);
    return p;

}
int main(){
    create();
    inorder(root); cout<<endl;
    insert(38,root);
    inorder(root); cout<<endl;
    insert(20,root);
    inorder(root); cout<<endl;
    return 0;
}