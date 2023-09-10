#include<iostream>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    else return fact(n-1)*n;
}
// Normal recursion
float c(int n, int r){
    float t1, t2, t3;
    t1 = fact(n); 
    t2 = fact(r);  
    t3 = fact(n-r);  
    return t1/(t2*t3);
}
// Pascal's triangle
float cP(int n, int r){
    if(r==0 || n==r) return 1;
    else return (cP(n-1, r-1)+ cP(n-1, r));
}
int main(){
    cout<<c(4,2);
    cout<<endl<<cP(4,2);
    return 0;
}