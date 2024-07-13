// 11: Average of Numbers in an Array

#include<iostream>
using namespace std;
int main (){

    float arr[]={5,4,3,2,1};
    float sum = 0;
    float average;
    for(int i=0;i<=4; i++){
    sum = (sum += arr[i]);
    average = sum/2;
    }
    cout<<"The average of number in an array is: "<<average<<endl;

    return 0;
}