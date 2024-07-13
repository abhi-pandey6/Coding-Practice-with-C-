// #include<iostream>
// using namespace std;
// int main (){
//     int arr[]={4,10};
//     int n = sizeof(arr)/4;
//     int product = 1 ;
//     for(int i=0;i<n;i++){
//         product = product * arr[i];
    
//     }
//     cout<<product<<endl;;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int arr[]={4,58,41,26,65,59,10};
//     int n = sizeof(arr)/4;
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     bool flag = false;
//     for(int i=0;i<n;i++){
//         if (arr[i]==x){
//             flag = true;
//             break;
//         }
//     }
//     if(flag == true){
//         cout<<x<<" is present";
//     }else{
//     cout<<x<<" is not present"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int arr[]={58,99,26,65,59,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = arr[0];
//     for(int i=0;i<=n;i++){
//         if(max<arr[i]){
//         max = arr[i];
//         } 
//     }
//     cout<<max;
//     return 0;
// } 


#include<iostream>
using namespace std;
int main (){
    int arr[]={58,99,26,65,59,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int secondmax = arr[0];
    for(int i=0;i<=n;i++){
        if(max<arr[i]){
        max = arr[i];
        } 
    }
    for(int i=0;i<=n;i++){
        if(secondmax<arr[i] && arr[i]!=max){
        secondmax = arr[i];
        } 
    }

    cout<<secondmax;
    return 0;
} 

