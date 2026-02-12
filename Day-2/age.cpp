#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age:";
    cin>>age;
    if (age>18){
        cout <<"You can vote \n";
    } else{
        cout <<"you can't vote\n";
    }
    return 0;
}