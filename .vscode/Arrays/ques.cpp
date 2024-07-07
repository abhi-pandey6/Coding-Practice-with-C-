#include <iostream>
using namespace std;

int main() {
     int Students = 10;  // Number of students
    int marks[Students];     // Array to store marks
    
    // Input marks for each student
    cout << "Enter marks for " << Students << " students:" << endl;
    for (int i = 0; i < Students; ++i) {
        cout << "student " << i<<": ";
        cin >> marks[i];
    }
    
    // Checking marks and printing roll numbers of students with marks less than 35
    cout << "Roll numbers of students with marks less than 35:" << endl;
    for (int i = 0; i < Students; ++i) {
        if (marks[i] < 35) {
            cout << i+1 << endl;  // Roll number is index + 1
        }
    }
    
    return 0;
}