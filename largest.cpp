#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >>c;

    // a=10,b=8,c=16;

    if(a>b){
        if(a>c){
            cout << "Largest is " << a <<endl;
        } else{
            cout << c << endl;
        }
    } else {
        if(b>c) {
            cout << b << endl;    
        } else {
            cout<<c<<endl;
        }
    }

    return 0;
}
