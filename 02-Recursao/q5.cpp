#include <iostream>

using namespace std;

//int findMin( int *numbers, int size );
int findMin( int *numbers, int size );

int main(){
    
    int n = 13;
    int num = 0;

    cout << "What is the size of your array?" << endl;
    cin >> n;
    
    int *numbers = new int[n];

    cout << endl << "Now type all the elements of your array. Please, use only numbers and press enter after each one." << endl;

    for( int i = 0; i < n; i++){
        cin >> num;
        numbers[i] = num;
    }


    cout << endl << "This is your array: [";

    for( int i = 0; i < n; i++ ){
        cout << numbers[i];
        if ( i < n-1 ){
            cout << ", ";
        }
    }

    cout << "]." << endl;

    cout << "The min element of your array is: " << findMin( numbers, n ) << endl;

    delete[] numbers;
    return 0;
}

/*
//iterative version of get min element function
int findMin(int *numbers, int size){
    int min = numbers[0];

    for(int i = 0; i < size; i++){
        if( min > numbers[i]){
            min = numbers[i];
        }
    }
    return min;
}   
*/


//recursive version of the get min element of an array
int findMin(int *numbers, int size){
    int min = numbers[size-1];
    if( size < 1 ){
        return min;
    }
    else{
        if( min > findMin( numbers, size-1 ) ){
            min = findMin( numbers, size-1 );
        }
        return min;
    }
}   
