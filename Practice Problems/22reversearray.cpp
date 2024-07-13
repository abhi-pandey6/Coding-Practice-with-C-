// 22: Reverse an array

#include<iostream>
using namespace std;
int main (){
    int arr[7] = {1,2,3,4,5,6,7};
    int brr[7];
    for (int i=0; i<=6; i++){
        brr[i] = arr[6-i];
    }
    for (int i=0; i<=6; i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}
