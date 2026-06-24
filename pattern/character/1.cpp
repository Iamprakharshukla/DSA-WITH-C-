#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value";
    cin>>n;
    int i=0;
    while(i<=n){
        int j=0;
        while (j<=n){
            char a=('A'+i-1);
            cout<<a;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}