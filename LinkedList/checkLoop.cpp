#include <iostream> 
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first;
void create(int A[], int n){
    Node *p,*q;
    p = new Node;
    p->data = A[0];
    p->next = NULL;
    first = p;
    for(int i=1; i<n; i++ ){
        q = new Node;
        q->data = A[i];
        q->next = NULL;
        p->next = q;
        p = q;
    }
}
bool isLoop(){
    Node *p,*q;
    p=q=first;
    do{
        p=p->next;
        q=q->next;
        q = (q!=NULL)? q->next : NULL;
    }while(p&&q&&p!=q);
    if(p==q) return 1;
    else return 0;
}
int main(){
    int A[] = {8,5,4,7,3,9};
    create(A,6);
    // Node *t1, *t2;
    // t1 = first->next->next;
    // t2 = first->next->next->next->next->next;
    // t2->next = t1;
    cout<<isLoop();
    return 0;
}