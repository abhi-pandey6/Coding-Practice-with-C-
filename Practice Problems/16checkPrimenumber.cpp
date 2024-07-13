// 16: Check if a number is prime

#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int num,flag=0;
    cout<<"Enter a numbe: ";
    cin>>num;
    for(int i=2;i<=sqrt(num);i++){
    if(num%i==0){
        flag = 1;
        break;
    }
}  
    if(flag==0)          
        cout<<" This is a prime number: "<<endl;
    else 
        cout<<"This is not a prime number: "<<endl;
    
    


    return 0;
}