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
int main(){
    int A [] = { 8,3,9,6,2};
    create(A,5);
    Node *t;
    t = first->next->next->next->next;
    t->next = first;
    display();
    return 0;
}