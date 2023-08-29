#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* rchild; node* lchild;
    node(int x){
        this->data = x;
        this->lchild = this->rchild = 0;
    }
}*root;
// creating tree
void create(){
    node *p, *t; int x;
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
//searching...........
int searchI(node *t, int key){
    while (t)
    {
        if(key>t->data)
            t=t->rchild;
        else if(key<t->data)
            t=t->lchild;
        else if(t->data == key)
            return t->data;
    }
    return -1;
    
}
int main(){
    create();
    cout<<searchI(root,10)<<endl;
    cout<<searchI(root,0)<<endl;
    cout<<searchI(root,100)<<endl;
    cout<<searchI(root,25)<<endl;
    cout<<searchI(root,50)<<endl;
    return 0;
}