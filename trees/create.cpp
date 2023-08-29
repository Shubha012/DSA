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
        this->lchild = NULL;
        this->rchild = NULL;
    }
}*root;

void create(){
    queue<node*> q;
    cout<<"Enter data: ";
    int x; node*p,*s,*t;
    cin>>x;
    p = new node(x); root = p;
    q.push(p);
    while(!q.empty()){
        s = q.front();
        q.pop();
        cout<<"Enter left child: ";
        cin>>x;
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
int main(){
    create();
    return 0;
}