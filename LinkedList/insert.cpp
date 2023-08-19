#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first;
void create(int A[], int n){
    Node *p, *q;
    p = new Node;
    first = p;
    p->data= A[0];
    p->next = 0;
   
    for(int i=1; i<n; i++){
        
        q = new Node;
        q->data = A[i];
        q->next = 0;
        p->next =q;
        p = q;
    }
}
void insert(int val, int pos){
    Node *p, *t;
    p = first;
    if(pos == 0){
        t = new Node;
        t->data = val;
        t->next = p;
        first = t;
    }
    else if(pos>0){
        for(int i=0 ; i<pos-1; i++){
            p=p->next;
        }
        t = new Node;
        t->data = val;
        t->next = p->next;
        p->next = t;
    }
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
    int a[] = {21,9, 3, 10, 2};
    create(a,5 );
    insert(100,3);
    display();
    cout<<endl;
    insert(50,0);
    display();
    cout<<endl;
    insert(500,4);
    display();
    return 0;
}