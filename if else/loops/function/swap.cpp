#include <iostream>
using namespace std;
void swapNumbers(int &a, int &b) {
    int c; 
    c = a;
    a = b;
    b = c ;
    
}

int main() {
    int a = 10, b = 20;
    cout<<a<<b<<endl;
    swapNumbers(a,b);
    cout<<a<<b<<endl;

    
    return 0;
}
