#include<iostream>
#include<stack>
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
    node *p,*t; int x;
    cout<<"Enter data: "; cin>>x;
    p = new node(x); root =p;
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

void inorderR(node *r){
    if(r){
        inorderR(r->lchild);
        cout<<r->data<<" ";
        inorderR(r->rchild);
    }
}
// ITERATIVE VERSION OF INORDER....
void inorderI(node *r){
    stack<node*>s;
    while (r!=0 || !s.empty())
    {
        if(r!=0){
            s.push(r);
            r= r->lchild;
        }
        else{
            r = s.top(); s.pop();
            cout<<r->data<<" ";
            r = r->rchild;
        }
    }
    
}

int main(){
    create();
    inorderR(root); cout<<endl;
    inorderI(root); 
    return 0;
}