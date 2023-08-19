#include<iostream>
using namespace std;
//inserting at a sorted position
void insertSort(int val, int a[], int l){
    int i=l-1;
    while(val<a[i]){
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=val;
}
// checking for sorted array
bool sorted(int arr[], int l){
    for(int i=0; i<l; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
// negative on left side
void sort(int arr[], int l){
    int i=0, j = l-1;
    while(i<j){
        while(arr[i]<0){i++; }
        while(arr[j]>=0){j--;}
        if(i<j){
            swap(arr[i],arr[j]);
        }
        //cout<<arr[i]<<" "<<arr[j]<<" ";
        // swap(arr[i],arr[j]);
    }
}
int main(){
    //int arr[10]={4,8,13,16,20,25,28,33};
    int arr[10]={-6,3,-8,10,5,-7,-9,12,-4,2};
    int size=10, l=8;
    //insertSort(18,arr,l);
    sort(arr,size);
    for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl<<sorted(arr,l);
    return 0;
}