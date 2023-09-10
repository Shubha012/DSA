#include<iostream>
using namespace std;
// recursion
int fib(int n){
    if(n<=1) {return n;}
    else {
    return (fib(n-2))+fib(n-1);}
}
//LOOP
int fib2(int n){
    int t0 = 0, t1=1,s,st;
    cout<<t0<<" "<<t1<<" "; 
    if(n<=1) return n;
    for(int i=2; i<=n; i++){
        s = t0+t1;
        cout<<s<<" ";
        st = t0; t0 = t1; t1 = t0+st;
    }
    cout<<endl;
    return s;
}
int main(){
    cout<<fib(5)<<endl;
    cout<<fib2(5);
    return 0;
}