#include<iostream>
using namespace std;
struct Array{
    int *A;
    int length;
    int size;
};
bool search(int key,struct Array arr, int l){
    for(int i=0; i<l; i++){
        if(arr.A[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    struct Array arr;
    arr.A = new int[10];
    arr.A[0]=18; arr.A[1]=7;
    arr.A[2]=10; arr.A[3]=15; arr.A[4]=20; arr.A[5]=2;
    arr.length=6;
    cout<<search(7,arr,6);
    cout<<endl<<search(100,arr,6);
    return 0;
}