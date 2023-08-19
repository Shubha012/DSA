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

Node * merge (Node *f, Node *s){
    Node *third, *last;
    if(f->data<s->data){
        third = last = f;
        f = f->next;
        last->next = NULL;
    }
    else{
        third=last=s;
        s=s->next;
        last->next=NULL;
    }
    while(f && s){
        if(f->data<s->data){
            last->next = f;
            last = f;
            f = f->next;
            last->next = NULL;
        }
        else{
            last->next = s;
            last = s;
            s = s->next;
            last->next = NULL;
        }
    }
    if(f){
        last->next = f;
    }
    else{
        last->next=s;
    }
    return third;
}
int main(){
    int a[] = {2,8,10,15};
    int b[] = {4,7,12,16};
    Node *one = create(a,4);
    Node *two = create(b,4);
    Node* fix = merge(one , two);
    Display(fix);
    return 0;
}