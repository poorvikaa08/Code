#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
     
    for(int i=0; i<n; i++)
    {   
        for(int j=0; j<i+1; j++)   // 0 --> i OR 1 --> i+1
        {
            cout << i+1 << " "; 
        }
        cout << endl;
    }
    return 0;
}