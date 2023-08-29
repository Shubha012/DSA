#include<iostream>
#include<queue>
using namespace std;
// Node....
class node{
    int data; 
    node* lchild; node* rchild;
    node(int x){
        this->data=x;
        this->lchild = this->rchild = 0;
    }
}*root;
// Creating tree
void create(){
    
}