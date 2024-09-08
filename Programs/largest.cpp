#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // a=10,b=8,c=16;

    if(a > b){
        if(a > c){
            cout << "Largest is " << a <<endl;
        } else{
            cout << "Largest is " << c << endl;
        }
    } else {
        if(b > c) {
            cout << "Largest is " << b << endl;    
        } else {
            cout << "Largest is " << c << endl;
        }
    }

    return 0;
}
