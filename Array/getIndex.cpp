#include<iostream>
using namespace std;
int get(int index, int arr[], int len){
    if(index>=0 && index<len){
        return arr[index];
    }
    return -1;
}
int main(){
    int a[10]={4,8,10,15,21,24,26};
    int size=10, l = 7;
    cout<<get(0,a,l);
    cout<<get(4,a,l);
    cout<<get(10,a,l);
    return 0;
}