#include<iostream>
using namespace std;

int main(){

    int row, coloumn;
    int i,j;

    cin >> row >> coloumn;

    for(i=1; i<=row;i++)
    {
        for(j=1; j<=coloumn; j++)
        {
            if(i==1 || i==row || j==1 || j==coloumn){
                cout <<" * ";
            } else {
                cout <<"   ";
            }           
        }
        cout << endl;
    }

    return 0;
}


    // for(i=1; i<=row;i++)
    // {
    //     for(j=1; j<=coloumn;j++)
    //     {
    //         if(i==1 || i==row ){
    //             cout<<" * ";
    //         } else if(j==1|| j==coloumn) {
    //             cout<<" * ";
    //         } else{
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<endl;
    // }

    

