// 14: First 10 Fibonacci numbers without recursion

#include<iostream>
using namespace std;
int main (){
    int a=1;
    int b=1;
    int sum = 0;
    for(int i=1;i<=10; i++){
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<endl;
    }
    

    return 0;
}