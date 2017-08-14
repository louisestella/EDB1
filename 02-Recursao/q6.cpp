#include <iostream>

using namespace std;

//int findMin( int *numbers, int size );
int sumList( int *numbers, int size );

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

    cout << "The sum of all elements of your array is: " << sumList( numbers, n ) << endl;

    delete[] numbers;
    return 0;
}


//recursive function that returns the sum of all elements on a list of integers
int sumList(int *numbers, int size){
    int sum = numbers[size-1];
    if( size < 1 ){
        return sum;
    }
    else{
        return sum + sumList( numbers, size-1);
    }
}   
