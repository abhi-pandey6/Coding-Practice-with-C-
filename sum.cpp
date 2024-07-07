#include <iostream>
using namespace std ;
int add(int a, int b=20) {
    return a+b;
}
int main (){
    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;


     int sum = add(amount1) ;

     cout<<sum;

     return 0;
}
