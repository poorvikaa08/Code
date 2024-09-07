#include<iostream>
using namespace std;

int main(){

    int row, coloumn;
    int i,j;    

    cin >> row >> coloumn;

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=coloumn; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}