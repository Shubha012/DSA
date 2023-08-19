#include<iostream>
using namespace std;
int sum(int a[], int l){
    int sum=0;
    for(int i=0; i<l; i++){
        sum+=a[i];
    }
    return sum;
}
int avg(int a[], int l){
    int sum=0;
    for(int i=0; i<l; i++){
        sum+=a[i];
    }
    return sum/l;
}
int main(){
    int arr[10]={12,23,8, 10,1 ,5,7,20};
    int size=10, l=8;
    cout<<sum(arr,l);
    cout<<avg(arr,l);
    return 0;
}