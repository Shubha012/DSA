#include<iostream>
using namespace std;
// method 1
int *reverse(int a[], int l){
    static int b[10];
    for(int i =l-1, j=0; i>=0; j++, i--){
        b[j]=a[i];
    }
    return b;
}
// method 2
void reverse2(int a[], int l){
    for(int i=0, j=l-1; i<j; i++, j--){
        swap(a[i],a[j]);
    }
}
int main(){
    int arr[10]={12,23,8, 10,1 ,5,7,20};
    int size=10, l=8;
    int *p;
    //p = (reverse(arr,l));
    reverse2(arr,l);
    for(int i=0; i<l; i++){
        //cout<<*(p+i)<<" ";
        cout<<arr[i]<<" ";
    }
    return 0;
}