#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value";
    cin>>n;
   
    int i=0;
    while(i<=n){
         char a=('A'+n-i);
        int j=1;
        while(j<=i){
           
            
            cout<<a;
            a+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
