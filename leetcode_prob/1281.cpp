#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no";
    cin>>n;
    int prod =1;
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        prod=prod*rem;
        n=n/10;
    }
    int rst=prod-sum;
    cout<<rst;
}