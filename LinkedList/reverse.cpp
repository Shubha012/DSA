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
}
void Display(){
    Node *p;
    p=first;
    while(p){
        cout<<p->data<<" ";
        p= p->next;
    }
    
}
void reverse(){
    Node *p,*q,*r;
    p = first;
    q = r= NULL;
    while(p){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
int main(){
    int a[] = {2,4,6,8};
    create(a,4);
    Display();
    cout<<endl;
    reverse();
    Display();

    return 0;
}