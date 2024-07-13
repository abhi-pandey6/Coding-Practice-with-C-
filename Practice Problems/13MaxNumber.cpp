// 13: Maximum number in an array

#include<iostream>
using namespace std;
int main(){
    int arr[]={10,5,66,38,91,82};
    int max = arr[0];
    for(int i=0; i<=6; i++){
        if(arr[i]>max)
        max = arr[i];
    }
        cout<<max<<endl;


    return 0;
}