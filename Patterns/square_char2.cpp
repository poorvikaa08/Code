#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++)  // outer 
    {   char ch = 'A';  // ASCII value of 'A'= 65
        for(int j=0; j<n; j++) // inner ==> line start
        {
            cout << ch << " ";
            ch=ch+1;  //65+1=66 ==> B 
        }
        cout << endl;
    }
    return 0;
}