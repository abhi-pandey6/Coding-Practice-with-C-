#include <iostream>
#include <cstdio>
using namespace std;


 int max_of_four(int a, int b, int c, int d){
     int max =a;
      
    if(a>b && a>c && a>d){
        cout<<a;
        }
    else if(b>a && b>c && b>d){
         cout<<b;
     }
    else if(c>a && c>b && c>d){
         cout<<c; 
    }
    else{
        cout<<d;
    }  
    return max;
 }
 
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
      max_of_four(a, b, c, d);
    cout<<max_of_four<<endl;
 
    return 0;
}
 


