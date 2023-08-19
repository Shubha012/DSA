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
    p->next=NULL; 
    for(int i=1; i<n; i++){
        q = new Node;
        q->data = A[i];
        q->next = NULL;
        p->next = q;
        p=q;
    }
}
Node *search1(int n){
    Node *p;
    p = first;
    while(p){
        if(p->data==n){
            return p;
        }
        p=p->next;
    }
    return NULL;
}
Node *search2(int n){
    Node *p, *q;
    p=first;
    while(p){
        if(p->data==n){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }  
        q=p;
        p=p->next; 
    }
    
    return NULL;
}
void display(){
    Node *p;
    p = first;
    while(p){
        
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main(){
    int A[]={1,12,5,40,8,10};
    create(A,6);
    cout<<search2(10)->data<<endl;
    cout<<search2(100)<<endl;
    display();
    return 0;
}