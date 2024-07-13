// 9: Fahrenheit to Celsius Conversion

#include<iostream>
using namespace std;
int main(){
    float frh,cel;
    cout<<"Enter the temperature in fahrenheit : ";
    cin>>frh;
    cel = (frh - 32)*5/9;
    cout<<"temperature in  celcius : "<<cel<<endl;
    return 0;
}