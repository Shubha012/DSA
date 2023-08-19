// #include<iostream>
// using namespace std;
// //defining linked list
// class Node{
//     public:
//     int data;
//     Node *next;
// }*first=NULL;

// // Creating linked list
// void create(int arr[], int n){
//     Node *p,*q;
//     p = new Node;
//     p->data = arr[0];
//     p->next = NULL;
//     first = p;
//     for(int i = 1; i<n; i++){
//         q = new Node;
//         q->data= arr[i];
//         q->next = NULL;
//         p->next=q;
//         p = q;
//     }
// }
// int count(){
//     Node *p;
//     p=new Node;
//     p = first;
//     int c=0;
//     while(p){
//         c++;
//         // cout<<p->data<<" ";
//         p=p->next;
//     }
//     return c;
// }
// int main(){
//     int A[]={3,2,10,19,24,9};
//     create (A,6);
//     cout<<count();
//     return 0;
// }


#include<iostream>
using namespace std;
//defining linked list
class Node{
    public:
    int data;
    Node *next;
}*first=NULL;

// Creating linked list
void create(int arr[], int n){
    Node *p,*q;
    p = new Node;
    p->data = arr[0];
    p->next = NULL;
    first = p;
    for(int i = 1; i<n; i++){
        q = new Node;
        q->data= arr[i];
        q->next = NULL;
        p->next=q;
        p = q;
    }
}

