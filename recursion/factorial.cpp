#include<iostream>
using namespace std;
//recursion
int fact(int num){
    if(num==1) return 1;
    else return fact(num-1)*num;
}
//LOOP
int fact2(int num){
    int f=1;
    while(num>0){
        f*=num;
        num--;
    }
    return f;
}
int main(){
    cout<<fact(5)<<endl;
    cout<<fact2(5);
    return 0;
}