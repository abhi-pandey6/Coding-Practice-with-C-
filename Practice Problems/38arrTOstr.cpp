// 38: convert an array of ascii codes to a string

#include<iostream>
#include<string>
using namespace std;
int main (){
    int x,i;
    int arr[5];
    cout<<"enter the number: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
        if(arr[i]==0)
        break;
    }
     x=i;
     cout<<"your string is : "<<endl;
     for(int j=0; j<x;j++)
     cout<<char(arr[j])<<endl;
     
    
    return 0;
}