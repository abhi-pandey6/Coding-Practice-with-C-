// 10: Sum of Numbers in an Array

#include<iostream>
using namespace std;
int main (){

    int arr[]={5,4,3,2,1};
    int sum = 0;
    for(int i=0;i<=4; i++){
    sum = sum += arr[i];
    }
    cout<<sum<<endl;

    return 0;
}