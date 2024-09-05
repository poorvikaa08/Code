#include<iostream>
using namespace std;

int main () {

    int i,n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    for(i=2; i<n;i++)
    {
        if(n%i==0){
            cout<<"NON PRIME"<<endl;
            break;
        } 
    }

    if(i==n){
         cout<<"PRIME";
    }

    return 0;
}
