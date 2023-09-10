#include<iostream>
using namespace std;

//recursion
int exp(int base, int pow){
    if(pow==0) return 1;
    else return exp(base, pow-1)*base;
}
//LOOP
int exp2(int base, int pow){
    int s = 1;
    while(pow>0){
        s*=base;
    }
    return s;
}
int main(){
    cout<<exp(2,3);
    cout<<endl<<exp(2,3);
    return 0;
}