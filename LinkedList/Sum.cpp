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
        q ->data=A[i];
        q->next=NULL;
        p->next=q;
        p=q;
    }
}
int sum(){
    Node *p;
    p = new Node;
    p = first;
    int sum = 0;
    while(p){
        // cout<<p->data<<" ";
        sum+=p->data;
        p = p->next;
    }
    return sum;
}
int main(){
    int A[]={1,10,23,16,8};
    create(A, 5);
    cout<<sum();
    return 0;
}

