#include<iostream>
using namespace std;

int factorial(int n){           //Function definition
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    int nume= factorial(n);
    int deno = factorial(r)*factorial(n-r);
    return nume/deno;
}

int main(){                      // Main function
    int n,r;
    cout << "Enter the values of n and r: ";
    cin >> n >> r;

    if(r>=n)
        return -1;

    int result = nCr(n,r);


    cout << n << "C" << r <<  " = " << result << endl;       //Function call

    return 0;
}