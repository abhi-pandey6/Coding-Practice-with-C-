// 52: Calculate Fibonacci(500)

#include<iostream>
using namespace std;
 int fibo( int n){
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2);
 }

int main (){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<fibo(n);
    return 0;

}