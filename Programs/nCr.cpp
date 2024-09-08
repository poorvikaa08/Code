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
    cin >> n >> r;

    if(r>=n)
        return -1;

    int result = nCr(n,r);


    cout << result << endl;       //Function call

    return 0;
}