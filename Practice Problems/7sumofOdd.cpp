// 7: Sum of Odd Numbers (10 to 30)

#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    for(int i=10; i<=30;i++){
        if(i%2!=0){
            sum = sum + i;
         } 
    }  
    cout<<"sum of odd number 10 to 30 is: "<<sum<<endl;  
    return 0;
}
