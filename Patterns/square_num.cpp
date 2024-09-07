#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;

    for(int i=1; i<=m; i++)  // Number of lines
    {
        for(int j=1; j<=n; j++)
        {
            cout << j << " "; //Digits that are printed
        }
        cout << endl;
    }
    return 0;
}