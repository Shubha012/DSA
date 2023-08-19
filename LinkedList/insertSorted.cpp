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
void insertSort(int x){
    Node *p,*t,*q;
    p = first;
    while(p && p->data<x){
        q=p;
        p = p->next;
    }
    t = new Node;
    t->data=x;
    t->next = q->next;
    q->next = t;
}
void display(){
    Node *p;
    p = first;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int a[]={3,7,9,15,20};
    create(a,5);
    display();
    cout<<endl;
    insertSort(10);
    display();
    return 0;
}