// 24: Merge two array

#include<iostream>
using namespace std;
int main (){
    int arr[3] ={4,5,6};
    int brr[4] ={7,8,9,10};
    int crr [7];
    int i,j=0;
    for(i=0; i<=2;i++){
        crr[i]=arr[i];
    }
    for(i=3; i<=6;i++){
        crr[i]=brr[j];
        j++;
    }
    cout<<crr[i];
    return 0;
}