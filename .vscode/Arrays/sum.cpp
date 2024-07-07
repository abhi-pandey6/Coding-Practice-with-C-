#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of number :  ";
    cin>>n;
    int arr[n];
    int sum = 0; 
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    // for(int i=0; i<=n-1; i++){
    // cout<<arr[i];
    cout<<sum<<endl;
    
    
    return 0;
}