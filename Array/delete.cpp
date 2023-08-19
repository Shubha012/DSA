#include<iostream>
using namespace std;
struct Array{
    int *A;
    int length;
    int size;
};
int Delete(int index, struct Array *a){
    int x= a->A[index];
    for(int i = index; i<a->length; i++){
        a->A[i]=a->A[i+1];
    }

    a->length--;
    return x;
    
}
void display(struct Array a){
    cout<<"output  ";
    for(int i=0; i<a.length; i++){
        cout<<a.A[i]<<" ";
    }
}
int main(){
    struct Array a;
    int s,n;
    cout<<"enter size of array : ";
    cin>>s;
    a.size=s;
    cout<<"Enter total numbers to be entered: ";
    cin>>n;
    a.A=new int[a.size];
    for(int i=0; i<n; i++){
        cin>>a.A[i];
    }
    a.length=n;
    display(a);
    cout<<endl<<Delete(3,&a)<<endl;
    display(a);

    return 0;
}