// Even or Odd Check

// Write a C program to check whether a given number is even or odd.
// Test Data : 15
// Expected Output :
// 15 is an odd integer

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the no";
    int a;
    cin>>a;
    if(a%2==0){
        cout<<a<<" is an even integer"<<endl;
    }
    else{
        cout<<a<<" is an odd integer"<<endl;
    }
}