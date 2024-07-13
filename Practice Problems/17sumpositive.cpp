// 17: Sum of digits of a positive integer

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    int sum = 0;
    while(n>0){
        int r = n%10;
        sum = sum+r;
        n = n/10;
    }
    
    cout<<sum<<endl;
    
    return 0;
}