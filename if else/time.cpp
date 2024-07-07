#include<iostream>
using namespace std;
int main (){
    int hour; 
    cin>>hour;
    if(hour>=4 && hour<12){
        cout<<"Good morning"<<endl;
    }
    if(hour>=13 && hour<16){
        cout<<"Good afternoon"<<endl;
    }
    if(hour>=17 && hour<19){
        cout<<"Good evening"<<endl;
    }
    else{
        cout<<"Good night"<<endl;
    }
    return 0;
}