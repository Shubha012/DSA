#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *Q;
};
void create(Queue *q){
    cout<<"Enter size of queue: ";
    cin>>q->size;
    q->front=q->rear=-1;
    q->Q=new int [q->size];
}
void enqueue(Queue *q, int x){
    
    if(q->rear == q->size-1)
        cout<<"Queue is full :( ";
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(Queue *q){
    int x=-1;
    if(q->rear==q->front)
        cout<<"Queue is empty"<<endl;
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
void display(Queue *q){
    for(int i=q->front+1; i<=q->rear; i++){
        cout<<q->Q[i]<<" ";
    }
}
int main(){
    Queue q;
    create(&q);
    enqueue(&q,2); enqueue(&q,4); enqueue(&q,7); enqueue(&q,10);
    enqueue(&q,12); enqueue(&q,22); 
    display(&q);
    cout<<endl<<dequeue(&q); 
    cout<<endl<<dequeue(&q); 
    cout<<endl<<dequeue(&q); 
    cout<<endl; display(&q);
    return 0;
}