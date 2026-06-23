// Write a C++ program to accept two integers and check whether they are equal or not.
// Test Data : 15 15
// Expected Output :
// Number1 and Number2 are equal

#include<iostream>
using namespace std;
int main(){
    cout << "Enter two integers: ";
    int a,b;
    cin >> a >> b;
    if(a==b){   
        cout << "Number1 and Number2 are equal" << endl;
    }
    else{
        cout << "Number1 and Number2 are not equal" << endl;
    }
    return 0;
}
