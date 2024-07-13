// 36: Convert a string to an array of characters

#include<iostream>
#include<string>
using namespace std;
int main (){
    string s="Abhijeet";
    char ca[s.length()];
    for (int i=0;i<s.length();i++){
        ca[i]=s[i];
    }
    for(int i=0;i<s.length();i++){
        cout<<ca[i];
    }
    return 0;
}