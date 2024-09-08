#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int MAX = INT16_MIN;      // min size of int
    for(int i=0; i<size; i++){
        MAX = max(MAX,arr[i]);      //predefined functions in C++
        // if(arr[i] > MAX){
        //     MAX = arr[i];
        // }       
    }
    return MAX;
}

int getMin(int arr[], int size){
    int MIN = INT16_MAX;      // min size of int
    for(int i=0; i<size; i++){
        MIN = min(MIN,arr[i]);
        // if(arr[i] < MIN){
        //     MIN = arr[i];
        // }       
    }
    return MIN;
}


int main(){
    int arr[100];
    int size;

    cin >> size;

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

   
    cout << "Max = " << getMax(arr,size) << endl;
    cout << "Min = " << getMin(arr,size) << endl;
    

    return 0;
}












    // // to initialize an entire array with the same value
    // int arr[10];
    // int n=10;

    // std::fill_n(arr,10,1);
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    