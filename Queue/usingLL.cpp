#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
}*front = NULL, *rear=NULL;
void enqueue( int x){
    Node *t = new Node;
    if(t == NULL)
        cout<<"Full";
    else{
        t->data = x;
        t->next = NULL;
        if(front==NULL)
            front = rear = t;
        else{
            rear->next = t;
            rear = t;
        }
    }
}
int dequeue(){
    int x=-1;
    Node* p ;
    if(front==NULL)
        cout<<"Empty";
    else{
        p = front;
        front = front->next;
        x = p->data;
        delete p;
    }
    return x;
}
void display(){
    Node *p = front;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main(){

    enqueue(2); 
    enqueue(3); enqueue(4); enqueue(5);
    enqueue(6); enqueue(7);
    display(); cout<<endl;
    cout<<dequeue()<<endl<<dequeue()<<endl;
    display(); cout<<endl;
    return 0;
}