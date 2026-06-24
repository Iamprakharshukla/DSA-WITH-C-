#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value";
    cin >> n;

    int i = 1;

    while(i <= n) {

        int space = i - 1;
        while(space) {
            cout << ' ';
            space = space - 1;
        }
       


        int j = n-i+1;
        while(j ) {
            cout << '*';
            j--;
        }

        cout << endl;
        i++;
    }
}