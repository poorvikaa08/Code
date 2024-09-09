#include<iostream>
using namespace std;

int BinToDec(int n){
    int pow = 1; 
    int ans=0;           // pow = 1 (2 to the power 0)
    while(n>0){
        int rem=n%10;
        ans += rem*pow;
        n/=10; 
        pow = pow*2;
    }
    return ans;
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Binary to Decimal: "<< BinToDec(n) << endl;

    return 0;

}