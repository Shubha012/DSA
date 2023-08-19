#include<iostream>
using namespace std;
int main(){
    char A[] = "decimal";
    char B[] = "mediical";
    int has[26] = {0};
    for(int i=0; A[i]!='\0'; i++){
        has[A[i]-97] +=1;
    }
    for(int i=0; B[i]!='\0'; i++){
        has[B[i]-97] -=1;
        if(has[B[i]-97]<0){
            cout<<"no";
            break;
        }
    }
    cout<<"yes";
    return 0;
}