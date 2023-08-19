#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *s;
};
void create(Stack *st){
    cout<<"ENter size of stack: ";
    cin>>st->size;
    st->top = -1;
    st->s = new int[st->size];
}
void push(Stack *st, int x){
    if(st->top+1 == st->size)
        cout<<"Stack Overflow"<<endl;
    else{
        st->top++;
        st->s[st->top] = x;
    }
}
int pop(Stack *st){
    int x=0;
    if(st->top == -1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        x = st->s[st->top];
        st->top--;
    }
    return x;
}
void display(Stack *st){
    int x = st->top;
    while(x>=0){
        cout<<st->s[x]<<" ";
        x--;
    }
    cout<<endl;
}
int main(){
    Stack st;
    create(&st);
    push(&st, 2);
    push(&st, 3);
    push(&st, 4);
    push(&st, 5);
    push(&st, 6);
    push(&st, 7);
    display(&st);
    cout<<pop(&st);
    cout<<pop(&st);
    // cout<<pop(&st);
    // cout<<pop(&st);
    cout<<endl;
    display(&st);
    return 0;
}

