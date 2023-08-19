#include<iostream>
using namespace std;
int main(){
    char name[]= "Anil14#5";
    //cout<<1;
    for(int i=0; name[i] !='\0'; i++){
        //cout<<2;
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57)){
            cout<<"Not valid"<<" ";
            break;
        }
    }
    cout<<"Valid";
    return 0;
}
//place it in function...............