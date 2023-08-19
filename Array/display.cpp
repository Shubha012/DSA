#include<iostream>
using namespace std;
//Display function
void display(int a[], int l){
    for(int i=0; i<l; i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int arr[]={8,3,7,12,6,9,10};
    int l=7;
    display(arr,l);
    return 0;
}