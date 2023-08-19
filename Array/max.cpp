#include<iostream>
#include<climits>
using namespace std;
int max(int a[], int l){
    int x=INT_MIN;
    for(int i=0; i<l; i++){
        if(a[i]>x){
            x = a[i];
        }
    }
    return x;
}
int main(){
    int a[10]={12,23,800, 10,1 ,5,7,20000};
    int size=10, l=8;
    cout<<max(a,l);
    return 0;
}