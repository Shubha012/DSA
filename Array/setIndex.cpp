#include<iostream>
using namespace std;
void setIndex(int a[], int index, int val, int len){
    if(index>=0 && index<len){
    a[index]=val;
    }
}
void display(int a[], int l){
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[10]={12,23,8, 10,1 ,5,7,20};
    int size=10, l=8;
    display(a,l);
    setIndex(a, 2, 100,l);
    display(a,l);
    return 0;
}