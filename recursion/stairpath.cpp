#include<iostream>
using namespace std;
int stair(int n){
    if (n<=3) return n;
    int totleways = stair(n-1)+ stair(n-2)+stair(n-3);
    return totleways; 
}
int main (){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    int ways = stair(n);
    cout<<stair(n);
    return 0;
}