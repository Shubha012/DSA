#include<iostream>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int size;
    int *Q;
};
void create(Queue *q){
    cout<<"Enter size of queue: ";
    cin>>q->size;
    q->front=q->rear=0;
    q->Q = new int[q->size];
}
void enqueue(Queue *q, int x){
    if( (q->rear+1)%q->size == q->front){
        cout<<"Queue is full";
    }
    else{
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
}
int dequeue(Queue *q){
    int x;
    if(q->front==q->rear)
        cout<<"Queue is empty";
    else{
        q->front = (q->front+1)%q->size;
        x = q->Q[q->front];
    }
    return x;
}
void display(Queue *q){
    for(int i=q->front+1; i<=q->rear;i++){
        cout<<q->Q[i]<<" ";
    }
}
int main(){
    Queue q;
    create(&q);
    enqueue(&q, 12); enqueue(&q, 13); enqueue(&q, 17); enqueue(&q, 20);
    enqueue(&q, 22); enqueue(&q, 120); enqueue(&q, 1200);
    display(&q); cout<<endl;
    cout<<dequeue(&q)<<endl; cout<<dequeue(&q)<<endl; cout<<dequeue(&q)<<endl;
    display(&q); cout<<endl;
    return 0;
}