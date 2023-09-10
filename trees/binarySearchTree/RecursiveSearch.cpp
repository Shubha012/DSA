#include<iostream>
#include<queue>
using namespace std;
// Node....
class node{
    public:
    int data; 
    node* lchild; node* rchild;
    node(int x){
        this->data=x;
        this->lchild = this->rchild = 0;
    }
}*root;
// Creating tree
void create(){
    node *p,*t; int x;
    queue<node*>q;
    cout<<"Enter data: ";  cin>>x;
    p = new node(x);
    root =p;
    q.push(p);
    while(!q.empty()){
        p = q.front(); q.pop();
        cout<<"Enter left child: ";
        cin>>x;
        if(x!=-1){
            t = new node(x);
            p->lchild = t;
            q.push(t);
        }
        cout<<"Enter right child: ";
        cin>>x;
        if(x!=-1){
            t = new node(x);
            p->rchild = t;
            q.push(t);
        }
    }
}

// searching
int searchR(node *p, int key){
    if(p==NULL)
        return -1;
    else if(p->data==key)
        return p->data;
    else if(p->data>key)
        return searchR(p->lchild, key);
    else 
        return searchR(p->rchild, key);
}

int main(){
    create();
    cout<<searchR(root,10)<<endl;
    cout<<searchR(root,25)<<endl;
    cout<<searchR(root,1)<<endl;
    cout<<searchR(root,50)<<endl;
    return 0;
}