#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first = NULL;
void push(int x){
    //cout<<1;
    Node *t = new Node;
    if(t==NULL)
        cout<<"Stack overflow";
    else{
        //cout<<2;
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
int pop(){
    int x =-1;
    Node *p = first;
    if(p==NULL)
        cout<<"UnderFlow";
    else{
        x = p->data;
        first = first->next;
        delete p;
    }
    return x;
}
int main(){
    cout<<pop()<<endl;
    push(8);
    push(2);
    Display(); cout<<endl;
    cout<<pop()<<endl;
    push(100);
    push(30);
    Display();
    return 0;
}