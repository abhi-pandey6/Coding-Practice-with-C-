// 37: Convert a string to an array of ASCII codes


#include<iostream>
#include<string>
using namespace std;
int main (){
    string str = "Abhijeet";
    char ch;
    for(int i=0;i<str.length();i++){
        ch = str.at(i);
        cout<<(int) ch<<endl;
    }
    return 0;
}