#include<iostream>
using namespace std;
int main(){
    char input[] = "WelCome";
    cout<<"Choose one of the option"<<endl;
    cout<<"1. Convert all in upper-case"<<endl;
    cout<<"2. Convert all in lower case"<<endl;
    cout<<"3. Convert in toggle case"<<endl;
    int n;
    cin>>n;
    if(n==1){
        for(int i=0; input[i]!='\0'; i++){
            if(input[i]>=97 && input[i]<= 122)
                input[i]-=32;
        }
    }
    if(n==2){
        for(int i=0; input[i]!='\0'; i++){
            if(input[i]>=65 && input[i]<= 90)
                input[i]+=32;
        }
    }
    if(n==3){
        for(int i=0; input[i]!='\0'; i++){
            if(input[i]>=97 && input[i]<= 122)
                input[i]-=32;
            else if(input[i]>=65 && input[i]<= 90){
                input[i]+=32;
            }
        }
    }
    cout<<input;
    return 0;
}