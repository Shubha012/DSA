#include <iostream>
using namespace std;

// structure -- collection of datatype under single variable
// struct rectangle
// {
//     int length;
//     int breadth;
// };
// int main(){
//     struct rectangle r ={20,10};
//     cout<<r.length<<endl;
//     cout<<r.breadth;
//     cout<<"Area of rectangle is "<<r.breadth*r.length<<endl;
//     cout<<"Perimeter of rectangle is "<<2*(r.breadth+r.length);
//     return 0;
// }

//Pointers -- is a variable used to store the address of other variable
// int main(){
//     int a = 10;
//     int *p;
//     p = &a;
//     cout<<*p<<endl;
//     cout<<a<<endl<<p<<endl;
//     //heap
//     int *q;
//     q = new int[3];
//     q[0]=10; q[40]=5;
//     // cout<<q[40]<<endl<<q<<endl<<&q[0]<<endl<<&q[4];
//     delete []q;
//     cout<<q[2];
// }

// Pointers to stucture
struct rectangle {
int length;
int breadth;
};
int main(){
    cout<<"hi";
    struct rectangle *r = new struct rectangle;
    (*r).length=2;
    (*r).breadth=4;
    cout<<"hello";
    cout<<"l = "<<(*r).length<<endl<<"b = "<<(*r).breadth;
    r->breadth=9;
    cout<<"l = "<<(*r).length<<endl<<"b = "<<(*r).breadth;
    return 0;
}