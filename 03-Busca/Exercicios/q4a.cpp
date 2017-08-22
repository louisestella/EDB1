#include <iostream>

using namespace std;

bool isBitonic( int v[], int size );
bool isDecrescent( int v[], int size );

int main(){
    int x;
    int size;
 
    cout << "What is the size of your array?" << endl;
    cin >> size;
    
    int *numbers = new int[size];

    cout << endl << "Now type all the elements of your array. Please, use only numbers and press enter after each one. Also: do NOT repeat elements." << endl;

    for( int i = 0; i < size; i++ ){
        cin >> x;
        numbers[i] = x;
    }


    cout << endl << "This is your array: [";

    for( int i = 0; i < size; i++ ){
        cout << numbers[i];
        if ( i < size-1 ){
            cout << ", ";
        }
    }

    cout << "]." << endl;

    if( isBitonic( numbers, size ) ){
        cout << "Your array is a bitonic sequence." << endl;
    } else {
        cout << "Your array is NOT a bitonic sequence." << endl;
    }

    return 0;
}


// function that determinates if an array of integers is bitonic or not
bool isBitonic( int v[], int size ){

    if( size <= 0){
        return true;
    } else{
        if( v[size] < v[size-1] ){
            return isBitonic( v, size-1 );
        } else{
            return isDecrescent( v, size );
        }
    }
}

bool isDecrescent( int v[], int size ){
    if( size <= 0 ){
        return true;
    } else{
         return v[size] < v[size-1] ? false :  isDecrescent( v, size-1 );
    }
}
