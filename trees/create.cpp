#include<iostream>
using namespace std;
class tree{
    public:
    int data;
    tree *lchild;
    tree *rchild;
}*root=NULL;

class queue{
    public:
    tree* data;
    queue* next;
}*first=0,*last=0;
// enqueue
void enqueue(tree* p){
    queue *t = new queue;
    t->data = p;
    t->next = NULL;
    if(!first){
        first = last = t;
    }
    else{
        last->next = t;
        last = t;
    }
}
tree* deqeue(){
    queue *t = new queue;
    if(first){
        t=first;
        first = first->next;
        return t->data;
    }
    else{
        return NULL;
    }
}
bool isEmpty(){
    if(first==NULL){
        return 0;
    }
    else return 1;
}
void create(int x){
    tree *t = new tree;
    tree *p;
    root = t;
    t->data = x;
    t->lchild = t->rchild = 0;
    enqueue(t);
    while(isEmpty()){
        p = deqeue();
        cout<<"Enter left child: "; cin>>x;
        if(x!=-1){
            t->data = x; t->lchild=t->rchild=0;
            p->lchild = t;
            enqueue(t);
        }
        cout<<"Enter right child: "; cin>>x;
        if(x!=-1){
            t->data = x; t->lchild=t->rchild=0;
            p->rchild = t;
            enqueue(t);
        }
    }
}
int main(){
    create(2);
    return 0;
}