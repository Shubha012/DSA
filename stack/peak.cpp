#include<iostream>
using namespace std;
class stack {
    public:
    int size;
    int top;
    int *s;
};
void create(stack *st){
    cout<<"Enter the size of stack: ";
    cin>>st->size;
    st->top = -1;
    st->s = new int[st->size];
}
void push(stack *st, int x){
    if(st->top==st->size-1)
        cout<<"Stack Overflow";
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(stack *st){
    int x=0;
    if(st->top==-1)
        cout<<"Stack Underflow";
    else{
        x = st->s[st->top];
        st->top--;
    }
    return x;
}
void display(stack *st){
    int x = st->top;
    while(x>=0){
        cout<<st->s[x]<<" ";
        x--;
    }
    cout<<endl;
}
int peek(stack *st, int pos){
    int x=-1;
    if(st->top - pos+1<0)
        cout<<"Invalid Position";
    else{
        x = st->s[st->top-pos+1];
    }
    return x;
}
int main(){
    stack st;
    create(&st);
    push(&st, 2);
    push(&st, 3);
    push(&st, 4);
    push(&st, 5);
    push(&st, 6);
    display(&st);
    cout<<peek(&st, 2);
    cout<<pop(&st);

    return 0;
}