#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
}*first=NULL;

void create(int A[], int n){
    //cout<<1;
    Node *p, *q;
    p = new Node;
    p->data=A[0];
    p->next=NULL;
    first=p;
    //cout<<" "<<1;
    for(int i=1; i<n; i++){
        //cout<<"hi";
        q = new Node;
        q->data = A[i];
        q->next = NULL;
        p->next = q;
        p=q;
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
    int A[]={3,5,10,13,17};
    create(A,5);
    Display();
    return 0;
}