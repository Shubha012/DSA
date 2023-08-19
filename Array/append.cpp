#include <iostream> 
using namespace std;
void append(int a[],int x,int l){
    a[l]=x;
    l++;
}
void display(int a[], int l){
    for(int i=0; i<l; i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int arr[8]={8,3,7,12,6,9,10};
    
    append(arr,4,7);
    display(arr,8);
    return 0;
}