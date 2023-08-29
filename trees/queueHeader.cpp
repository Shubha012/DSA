class Node{
    public:
    Node* lchild;
    int data;
    Node* rchild;
};
class Queue{
    public:
    int size;
    int front,rear;
    Node** Q;
};
void create(Queue* q, int size){
    q->size = size;
    q->front=q->rear = 0;
    q->Q = new Node*[q->size];
}
void enqueue(){
    
}
