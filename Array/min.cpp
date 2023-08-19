#include<iostream>
#include<climits>
using namespace std;
int min(int a[], int l){
    int x=INT_MAX;
    for(int i=0; i<l; i++){
        if(x>a[i]){
            x = a[i];
        }
    }
    return x;
}
int main(){
    int a[10]={12,23,8, -10,1 ,5,7,-20};
    int size=10, l=8;
    cout<<min(a,l);
    return 0;
}