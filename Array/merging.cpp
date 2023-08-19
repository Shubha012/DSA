#include<iostream>
using namespace std;
int* merging(int a[], int b[], int asize, int bsize){
    int i=0,j=0,k=0;
    static int merge[(asize+bsize)];
    while(i<asize && j<bsize){
        if(a[i]<b[j]){
            merge[k++]=a[i++];
        }
    }
}
int main(){
    int a[]={3,8,16,20,25};
    int b[]={4,10,12,22,23};
    int asize=5, bsize=5;

    return 0;
}