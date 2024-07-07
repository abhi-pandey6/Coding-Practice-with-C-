#include<iostream>
using namespace std;
int main (){
    int a=4;
    int b = 5;
    int *c=&b;

    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of b is "<<&b<<endl;

    cout<<"the value at address c is "<<c<<endl;

    
    return 0;

}