// #include <iostream>
// using namespace std;

// int main() {
//      int n;
//      cout<<"enter the size of array :  ";
//       cin>>n;
//      int arr[n]; 
//      cout<<"Enter"<< n << " integer:"<<endl;
//       for(int i=0; i<n; i++){
//         cout<<i+1;
//         cin>>arr[i];
//     }
//     int product = 1;
//     for(int i=0; i<n; i++){
//         product *= arr[i];
//     cout<<product<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
      int n;
     cout<<"enter the size of array :  ";
     cin>>n;
     int arr[100]; 
     cout<<"Enter"<<n<<"integer:"<<endl;
     for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int product = 1;
    for(int i=0; i<n; i++){
        product *= arr[i];}
    cout<<product<<endl;
    
    return 0;
}
    

