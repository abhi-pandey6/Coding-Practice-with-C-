#include<iostream>
using namespace std;
int main(){

int n;


cout<<"Enter a number"<<endl;

cin>>n;

switch(1){
case 1 :
     if (n%5==0 && n%11==0)
     cout<<" number is divisibl"<<endl;

    
    else {
        cout<<" number is not divisible"<<endl;
    }
    break;

default:
     cout<<"invalide"<<endl;


}

return 0;
}

