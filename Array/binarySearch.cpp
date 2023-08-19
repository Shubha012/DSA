#include <iostream>
using namespace std;
bool binarySearch(int key,int a[], int len){
    int s=0, l=len-1;
    int mid = (s+l)/2;
    while(s<=l){
        if(key>a[mid]){
            s = mid+1;
        }
        else if(key==a[mid]){
            return true;
        }
        else{
            l = mid -1;
        }
        mid = (s+l)/2;
    }
    return false;
}
int main(){
    int arr[10]={2,5,8,10,14,17};
    int size=10, l=6;
    cout<<binarySearch(8,arr,l);
    cout<<endl<<binarySearch(17,arr,l);
    cout<<endl<<binarySearch(10,arr,l);
    cout<<endl<<binarySearch(100,arr,l);
    return 0;
}