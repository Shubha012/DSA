#include<iostream>
using namespace std;

//Class definition
class node{
    public:
    int data;
    node* lchild; node* rchild;
    int height;
    node(int x){
        this->data = x;
        this->lchild = this->rchild = NULL;
    }
}*root;

// Node height calculation
int NodeHeight(node *p){
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height:0;
    hr = p && p->rchild ? p->rchild->height:0;
    return hl>hr?hl+1:hr+1;
}

// Balance factor 
int balanceFactor(node *p){
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height:0;
    hr = p && p->rchild ? p->rchild->height:0;
    return hl-hr;
}

// LL ROTATION
node* LLRotation(node *p){
    node* pl = p->lchild;
    node* plr = pl->rchild;
    pl->rchild = p;
    p->lchild = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
    if(p==root)
        root = pl;
    return pl;
}
// RR Rotation
node* RRRotation(node *p){
    node* pr = p->rchild;
    node* prl = pr->lchild;
    pr->lchild = p;
    p->rchild = prl;
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);
    if(p==root)
        root = pr;
    return pr;
}
// LR Rotation
node* LRRotation(node *p){
    node* pl = p->lchild;
    node* plr = pl->rchild;
    p->lchild = plr->rchild;
    pl->rchild = plr->lchild;
    plr->lchild = pl;
    plr->rchild = p;
    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height = NodeHeight(plr);
    if(root == p)
        root = plr;
    return plr;
}
// RL rotation
node* RLRotation(node *p){
    node* pr = p->rchild;
    node* prl = pr->lchild;
    p->rchild = prl->lchild;
    pr->lchild = prl->rchild;
    prl->lchild = p;
    prl->rchild = pr;
    pr->height = NodeHeight(pr);
    p->height = NodeHeight(p);
    prl->height = NodeHeight(prl);
    if(root==p)
        root = prl;
    return prl;
}
// Recursive function to insert
node* RInsert(node *p, int key){
    node* t= NULL;
    if(p==NULL){
        t = new node(key);
        t->height = 1;
        return t;
    }
    if(key<p->data)
        p->lchild = RInsert(p->lchild, key);
    else if(key>p->data)
        p->rchild = RInsert(p->rchild, key);
    p->height = NodeHeight(p);

    if(balanceFactor(p)==2 && balanceFactor(p->lchild)==1)
        return LLRotation(p);
    else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==-1)
        return RRRotation(p);
    else if(balanceFactor(p)==2 && balanceFactor(p->lchild)==-1)
        return LRRotation(p);
    else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==1)
        return RLRotation(p);
    return p;

}
// Inorder display
void display (node* r){
    if(r){
        display(r->lchild);
        cout<<r->data<<endl;
        display(r->rchild);
    }
}
int main(){
    root = RInsert(root,50);
    RInsert(root,10);
    RInsert(root,20);
    display(root);
    return 0;
}