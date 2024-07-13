// 6: Calculate 10!

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int factorial = 1;
     
    for(int i=1; i<=n; i++){
        factorial = factorial * i;
    }
        cout<<factorial<<endl;
    return 0;
}
