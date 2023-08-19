#include<iostream>
using namespace std;
int main(){
    // by hash-tabel
    char a[] = "find";
    int H[26] = {0};
    for(int i=0; a[i]!='\0'; i++){
        H[a[i]-97] +=1;
    }
    for(int i=0; i<26; i++){
        if(H[i]>1){
            cout<<"Duplicate";
            break;
        }
    }
    cout<<"no";
    return 0;
}