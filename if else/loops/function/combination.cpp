#include<iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int main (){
    int n;
    cout<<"enter n  : ";
    cin>>n;
    int r;
    cout<<"enter r  : ";
    cin>>r;
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
     cout<<"nfact is : " <<ncr;
     return 0;
}