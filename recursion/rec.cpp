#include<iostream>
using namespace std;
 void increasing( int n){
    if(n==0) return;
    cout<<n<<endl;
     increasing(n-1);
    cout<<n<<endl;
    return;
 }

int main (){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    increasing(n);
    return 0;

}