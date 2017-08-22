#include <iostream>

using namespace std;

int findPeak( int v[], int first, int last );

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

   cout << "The peak of the above bitonic sequence is on this index position: " << findPeak( numbers, 0, size ) << endl;

    return 0;
}


// function that determinates if an array of integers is bitonic or not
int findPeak( int v[], int first, int last ){
    
    int middle = (last + first) / 2;

    if( last == first ){
        return first;

    } else{

        if( v[middle] > v[middle-1] && v[middle] < v[middle+1] ) {
            return findPeak( v, middle+1, last );
        } else if( v[middle] < v[middle-1] && v[middle] > v[middle+1] ) {
            return findPeak( v, first, middle-1 );
        } else if( v[middle] > v[middle-1] && v[middle] > v[middle+1] ){
            return middle;
        }
    }

    return -1;    
}
