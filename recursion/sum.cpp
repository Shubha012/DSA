#include<iostream>
using namespace std;
// Recusion
int sum(int num){
    if(num>0){
        return sum(num-1)+num;
    }
    return 0;
}

//LOOP
int sum2(int num){
    int s = 0;
    while(num>0){
        s+=num;
        num--;
    }
    return s;
}
int main(){
    cout<<sum(5);
    cout<<endl<<sum2(5);
    return 0;
}