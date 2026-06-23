// Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
// Test Data : -5
// Expected Output :
// The value of n = -1
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of m: ";
    int m;
    cin>>m;
    int n;
    if(m>0){
        n=1;
    }
    else if(m==0){
        n=0;
    }
    else{
        n=-1;
    }
    cout<<"The value of n = "<<n<<endl;
}