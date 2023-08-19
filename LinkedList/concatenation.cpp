#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first;
Node* create(int A[], int n){
    Node *p,*q;
    p = new Node;
    first = p;
    p->data = A[0];
    p->next = NULL;
    for(int i=1; i<n; i++){
        q = new Node;
        q->data=A[i];
        q->next = NULL;
        p->next = q;
        p = q;
    }
    return first;
}
void Display(Node *s){
    Node *p;
    p=s;
    // cout<<p->data;
    
    while(p){
        cout<<p->data<<" ";
        p= p->next;
    }
}
void concat(Node *f, Node *s){
    Node *p;
    p = f;
    while(p->next){
        p = p->next;
    }
    p->next = s;
    first = f;
}
int main(){
    int a[] = {2,9,6,8};
    int b[] = {10,9,7};
    Node *f = create(a,4);
    // Display(f);
    Node *s = create(b,3);
    // Display(s);
    concat(f,s);
    Display(f);
    return 0;
}

