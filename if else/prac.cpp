#include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    if(age<18){
        cout<<"you can not come my party"<<endl;
    }
    else if (age==18){
        cout<<"you are a kid and you will get a kid to pass to the party"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }
    return 0;
}