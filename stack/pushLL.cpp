#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first = NULL;
void push(int x){
    Node *t;
    t = new Node;
    if(t == NULL)
        cout<<"Stack Overflow";
    else{
        t->data = x;
        t->next = first;
        first = t;
    }
}
void Display(){
    Node *p = first;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main(){
    push(3);
    push(5);
    push(10);
    Display();
    return 0;
}