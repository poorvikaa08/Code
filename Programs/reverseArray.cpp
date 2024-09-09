#include<iostream>
using namespace std;

int reverse(int arr[], int size){             // arr[size]  --> don't pass size as a variable ins   ide the array to the function
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    return 0;
}

void printArray(int arr[], int size){          //For printing array
    int i;
    for(i=0; i<size; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main(){

    // int arr[10] = {23, 27, 64, -97, 35, 64, 58, 25, -35, 65};

    int arr[100];     
    cout << "Enter the size of the array: ";

    int size;
    cin >> size;

    cout << "Input " << size << " array elements: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Array : ";
    printArray(arr, size);

    reverse(arr, size);     // function call

    cout << "Reversed Array : ";
    printArray(arr, size);

    return 0;
}
