#include<iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void insert(int x, int index, struct Array arr){
    int j;
    for( j=arr.length; j>index; j--){
        arr.A[j]=arr.A[j-1];
    }
    arr.A[index]=x;
    arr.length++;
}
void display(struct Array arr){
    for (int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
}
int main(){
    struct Array arr;
    arr.size=10;
    arr.A = new int[10];
    arr.length=7;
    int x;
    for(int i=0; i<arr.length; i++){  
        cin>>x;
        arr.A[i]=x;
    }
    insert(15,4,arr);
    display(arr);
    
    return 0;
}
