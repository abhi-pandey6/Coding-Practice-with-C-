#include <bits/stdc++.h>
using namespace std;

void solve(int *a,int *b) {
    int sum = *a**b;
    int sub;
    
    if (*b < *a){
        sub =*a-*b;
    } 
    else{
        sub=*b-*a;
    } 
    *a= sum;
    *b= sub;  
}

int main() {
    int a, b;
    int *p1 =&a, *p2 = &b;
    cin>>a>>b;
    solve(p1, p2);
    cout<<a<<endl<<b;

    return 0;
}