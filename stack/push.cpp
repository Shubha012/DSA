#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *s;
};

void create(Stack *st){
    cout<<"enter total inputs: ";
    cin>>st->size;
    st->top = -1;
    st->s = new int[st->size];
}
void push(Stack *st, int x){
    cout<<1;
    if(st->top == st->size-1){
        cout<<"StackOverflow";
    }
    else{
        st->top++;
        st->s[st->top] = x;
    }
}

int main(){
    Stack st;
    create(&st);
    push(&st, 2);
    cout<<"done";
    return 0;
}
