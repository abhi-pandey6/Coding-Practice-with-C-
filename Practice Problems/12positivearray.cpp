// 12: Positive Numbers in an Array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,-5,-9,6,5,7,-2,-3,-9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"positive number: ";
    for(int i=0; i<size; i++){
    if(arr[i]>0){
        cout<<arr[i]<<" ";
    }
    }
    return 0;
}