#include<iostream>
using namespace std;
// Taylor series :-   e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ...... + n 
//Method 1
float e(int x, int n){
    static float p=1, f=1;
    float r;
    if(n==0) return 1;
    else{
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        return (r + (p/f));
    }
}
// Method 2 -- Horner's Rule
//recursion HR
float eH(int x, int n){
    static float s=1;
    if(n==0) return s;
    else s = (1+x/n) *s;
    return eH(x,n-1);
}
//LOOP
float eH2(int x, int n){
    float s=1;
    for(; n>0; n--){
        s = (1+x/n)*s;
    }
    return s;
}
int main(){
    cout<<e(2,4)<<" "<<1<<endl;
    cout<<e(2,5)<<" "<<2<<endl;
    cout<<eH(2,4)<<" "<<3<<endl<<eH2(2,4)<<" "<<4;
    return 0;
}