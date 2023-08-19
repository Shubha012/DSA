// Removing duplicate in a sorted linked list

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
void Duplicate(){
    Node *p,*q;
    p = first;
    q = first->next;
    while(q){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q = p->next;
        }
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
int main(){
    int a[]={3,5,5,8,8,8};
    create(a,6);
    Duplicate();
    Display();
    return 0;
}