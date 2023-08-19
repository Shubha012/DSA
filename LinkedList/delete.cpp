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
int Delete(int x, int pos){
    Node *p,*q;
    int val;
    p = new Node;
    p = first;
    if (pos==0){
        val = first->data;
        first = first->next;
        delete p;
        return val;
    }
    else{
        for(int i=0; i<pos;i++){
            q=p;
            p=p->next;
        }
        val = p->data;
        q->next=p->next;
        delete p;
        return val;
    }
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
    int A[]={8,3,9,7,6};
    create(A,5);
    display();
    cout<<endl;
    cout<<Delete(9,0)<<endl;
    display();
    return 0;
}