#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value";
    cin>>n;
    char a=('A');
    int i=0;
    while(i<=n){
        int j=1;
        while(j<=i){
            
            
            cout<<a;
            a=a+1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
