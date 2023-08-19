#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node *next;
}*first, *last;
void create(int A[], int n){
    Node *p, *q;
    p = new Node;
    first = p;
    p->data = A[0];
    p->next = NULL;
    for(int i=1; i<n; i++){
        q = new Node;
        q->data = A[i];
        q->next = NULL;
        p->next = q;
        p = q;
    }
}
void LastPointer(){
    Node *p;
    p = first;
    while(p->next){
        p=p->next;
    }
    
    last =p;
}
void InsertLast(int val){
    Node *t;
    t = new Node;
    if(first==NULL){
        cout<<" 3 ";
        t->data=val;
        t->next = NULL;
        first = last = t;
    }
    else{
        t->data=val;
        t->next = NULL;
        last->next=t;
        last = t;
    }
}
void display(){
    Node *p;
    
    p = first;
    while(p){
        cout<<p->data<<" ";
        p= p->next;
    }
}
int main(){
    //Zero nodes are there
    // InsertLast(2);
    // display();
    //nodes are present
    int A[]={2,1,3,4,5};
    create(A,5);
    display();
    cout<<endl;
    LastPointer();
    InsertLast(10);
    display();
    return 0;
}