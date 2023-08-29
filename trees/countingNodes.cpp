#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *lchild; node* rchild;
    node(int x){
        this->data = x;
        this->lchild = this->rchild = 0;
    }
}*root;
void create(){
    node *p,*t; int x;
    cout<<"Enter data: ";
    cin>>x;
    p = new node(x);
    root = p;
    queue<node*>q;
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
// Recursivily counting the nodes of trees
int count(node *p){
    int x,y;
    if(p){
        x = count(p->lchild);
        y = count(p->rchild);
        return x+y+1;
    }
    return 0;
}
int main(){
    create();
    cout<<count(root);
    return 0;
}