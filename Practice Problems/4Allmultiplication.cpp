// 4: Print All Multiplication Tables (1 to 10)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int product = 1;
    for(int i=1; i<=10;i++){
        product = n*i;
            cout<<product<<endl;
        }
     
    return 0;
}

