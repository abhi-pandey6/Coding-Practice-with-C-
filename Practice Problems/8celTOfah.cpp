// 8: Celsius to Fahrenheit Conversion

#include<iostream>
using namespace std;
int main(){
    float frh,cel;
    cout<<"Enter the temperature in celcius: ";
    cin>>cel;
    frh = (cel * 9/5)+32;
    cout<<"temperature in fahrenheit : "<<frh<<endl;
    return 0;
}