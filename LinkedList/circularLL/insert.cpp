#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first;
void create(int A[], int n){
    Node *p,*q;
    p = new Node;
    p->data = A[0];
    p->next = NULL;
    first = p;
    for(int i=1; i<n; i++){
        q = new Node;
        q->data = A[i];
        q->next = NULL;
        p->next = q;
        p=q;
    }
}
void display(){
    Node *p;
    p = first;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);
}
void insert(int index, int val){
    Node *t= new Node;
    Node *p = first;
    if(index<0) return;
    else if(index==0){
        t->data = val;
        if(first == NULL){
            first = t;
            first->next = first;
        }
        else{
            while(p->next != first){
                p=p->next;
            }
            t->next = p->next;
            p->next = t;
            first = t;
        }
    }
    else{
        for(int i=0; i<index-1; i++){
            p=p->next; 
        }
        t->data = val;
        t->next = p->next;
        p->next = t;
    }
}

int main(){
    int A [] = { 8,3,9,6,2};
    create(A,5);
    Node *t;
    t = first->next->next->next->next;
    t->next = first;
    display();
    insert(0,10);
    cout<<endl;
    display();
    insert(3,20);
    cout<<endl;
    display();
    insert(5,30);
    cout<<endl;
    display();
    return 0;
}