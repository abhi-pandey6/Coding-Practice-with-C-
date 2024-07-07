#include<iostream>
using namespace std;
int main(){

int year = 2025;

if(((year%4==0) || (year%400==0) && (year%100!=0))){
    cout<<"is a leap year"<<endl;
}
else{
    cout<<"is a not leap year"<<endl;
}
  
    
    
}