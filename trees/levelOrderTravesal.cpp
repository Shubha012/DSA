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
    node *p,*t;
    int x; 
    cout<<"Enter data: "; cin>>x;
    p = new node(x); root = p;
    queue<node*>q;
    q.push(p);
    while(!q.empty()){
        cout<<"Enter left child: ";
        cin>>x;
        p = q.front(); q.pop();
        if(x!=-1){
            t = new node(x);
            p->lchild =t;
            q.push(t);
        }
        cout<<"Enter right child: ";
        cin>>x;
        if(x!=-1){
            t = new node(x);
            p->rchild =t;
            q.push(t);
        }
    }
}

void levelOrder(node *p){
    queue<node*>q;
    cout<<p->data<<" ";
    q.push(p);
    while(!q.empty()){
        p = q.front(); q.pop();
        if(p->lchild){
            cout<<p->lchild->data<<" ";
            q.push(p->lchild);
        }
        if(p->rchild){
            cout<<p->rchild->data<<" ";
            q.push(p->rchild);
        }
    }
}
int main(){
    create();
    levelOrder(root);
    return 0;
}