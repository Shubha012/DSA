#include<iostream>
#include <climits>
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
bool isSorted(){
    Node *p;
    int x=INT_MIN;
    p = first;
    while(p){
        
        if(p->data<x)
            return false;
        x =p->data;
        p=p->next;
    }
    return true;
}
int main(){
    int A[]={2,3,4,5,6,10};
    create(A,5);
    cout<<isSorted();
    return 0;
}