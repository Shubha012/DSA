#include<iostream>
using namespace std;
class queue {
    public:
    int size;
    int front; int rear;
    int *q;
};
void create(queue *qu){
    cout<<"enter size of queue: ";
    cin>>qu->size;
    qu->front=qu->rear=-1;
    qu->q = new int [qu->size];
}
void enqueue(queue *qu, int x){
    if(qu->rear==qu->size-1)
        cout<<"Stack is full";
    else{
        qu->rear++;
        qu->q[qu->rear]=x;
    }
}
void display(queue *qu){
    for(int i = qu->front+1; i<qu->rear; i++){
        cout<<qu->q[i]<<" ";
    }
}
int main(){
    queue qu;
    create(&qu);
    enqueue(&qu, 2); enqueue(&qu, 3); enqueue(&qu, 7); enqueue(&qu, 10);
    enqueue(&qu, 19); enqueue(&qu, 25); enqueue(&qu, 100);
    display(&qu);
    return 0;
}