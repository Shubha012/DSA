#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=3; i++){
        for(int j=0; j<=5-i-2; j++){
            cout<<"  ";
        }
        for(int j=0; j<(2*i-1); j++){
            cout<<"* ";
        }cout<<endl;
    }

    for(int i=2; i>=0; i--){
        for(int j=0; j<=5-i-2; j++){
            cout<<"  ";
        }
        for(int j=0; j<(2*i-1); j++){
            cout<<"* ";
        }cout<<endl;
    }
    return 0;
}