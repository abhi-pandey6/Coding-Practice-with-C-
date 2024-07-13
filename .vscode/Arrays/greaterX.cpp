#include<iostream>
using namespace std;
int main (){
    int arr[7]={1,2,3,4,5,6,7};
    int x = 5;
    int count = 0;
    
    for(int i=0; i<=6; i++){
        if(arr[i]>x){
         count++;
          cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}        