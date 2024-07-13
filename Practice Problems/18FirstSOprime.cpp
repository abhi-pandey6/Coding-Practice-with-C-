// First 100 prime numbers

#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int x = 2;
    int primenumber = 100;
    while(primenumber > 0){
        for(int i=2;i<=(x/2);i++){
            if(x%i==0){
                break;
            }
        }
    
    if(i>(x/2)){
        cout<<x;
        primenumber --;
    }
    
}
    


    return 0;
}
