#include <iostream>
using namespace std;
int main(){
    char s[] = "Shubha Prasad";
    int count=0;
    for(int i=0; s[i]!='\0'; i++){
        count++;
    }
    cout<<s;
    cout<<endl<<"Length = "<<count;
    return 0;
}