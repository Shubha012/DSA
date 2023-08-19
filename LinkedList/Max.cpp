#include<iostream>
#include<climits>
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
    p->data = A[0];
    p->next = NULL;
    for(int i=1 ; i<n; i++){
        q = new Node;
        q->data=A[i];
        q->next=NULL;
        p->next = q;
        p=q;
    }
}
int max(){
    Node *p;
    p = first;
    int x = INT_MIN;
    while(p){
        if(p->data>x)
            x = p->data;
        p=p->next;
    }
    return x;
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
    int A[]={12,3,2,5,11,10,34};
    create(A, 7);
    display(); cout<<endl;
    cout<<max();
    return 0;
}