#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value";
    cin>>n;

    int i=0;
    while(i<=n){
        int j=1;
        while(j<=i){
            char a=(65+i-1);
            
            cout<<a;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
