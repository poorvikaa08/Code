#include<iostream>
using namespace std;

int DecToBin(int n){
    int rem, ans=0, pow=1;
    while(n>0){
        rem = n%2;
        n/=2;
        ans+= rem*pow;
        pow = pow*10;
    }
    return ans;
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Decimal to Binary: "<< DecToBin(n) << endl;

    return 0;

}