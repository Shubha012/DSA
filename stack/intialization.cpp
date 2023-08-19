#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *s;
};
int main(){
    Stack st;
    cout<<"Enter size of stack: ";
    cin>>st.size;
    st.s = new int[st.size];
    st.top = -1;
    cout<<"done";
    return 0;
}