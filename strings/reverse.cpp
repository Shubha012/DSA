#include<iostream>
using namespace std;
int main(){
    char a[] ="ABCD";
    char b[4];
    // Method 1 - using 2 arrays
    // for(int i=0, j=3; i<4; i++, j--){
    //     b[i]=a[j];
    // }
    // for(int i=0; i<4; i++){
    //     a[i] = b[i];
    // }
    // cout<<a;

    //method2 - change in same array
    for(int i=3, j=0; j<i; i--,j++){
        swap(a[i], a[j]);
    }
    cout<<a;
    return 0;
}