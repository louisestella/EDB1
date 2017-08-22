#include <iostream>

using namespace std;

int findPeak( int v[], int first, int last );
int binarySearch( int v[], int key, int peak, int first, int last );
int crescentBinarySearch( int v[], int key, int first, int last );
int decrescentBinarySearch( int v[], int key, int first, int last );

int main(){
    int x;
    int size;
    int peak;
    int k;
 
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

    cout << "Choose a key to find on the array above." << endl;
    cin >> k;

    peak = findPeak( numbers, 0, size );
       
    if ( binarySearch( numbers, k, peak, 0, size ) < 0 ){
        cout << "The key you're searching for is not in this array." << endl;
    } else{
        cout << "The key you're searching for is in this index position: " << binarySearch( numbers, k, peak, 0, size ) << endl;
    }

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

    return -1; //NOT_FOUND    
}


//binary search that returns the index of a key on a bitonic sequence
int binarySearch( int v[], int key, int peak, int first, int last ){

    if( key == v[peak] ){
        return peak;
    } else{
        
        if( crescentBinarySearch( v, key, first, peak-1 ) != -1 ){
            return crescentBinarySearch( v, key, first, peak-1 );
        } else{
            return decrescentBinarySearch( v, key, peak+1, last );
        }
    }
    return -1;
}

int crescentBinarySearch( int v[], int key, int first, int last ){
    int middle = (first + last)/2;

    if( first > last ){
        return -1;
    } else{

        if( v[middle] < key ){
            return crescentBinarySearch( v, key, middle+1, last );
        } else if( v[middle] > key ){
            return crescentBinarySearch( v, key, first, middle-1 );
        } else return middle;
    }
}


int decrescentBinarySearch( int v[], int key, int first, int last ){
    int middle = (first + last)/2;

    if( first > last ){
        return -1;
    } else{

        if( v[middle] > key ){
            return crescentBinarySearch( v, key, middle+1, last );
        } else if( v[middle] < key ){
            return crescentBinarySearch( v, key, first, middle-1 );
        } else return middle;
    }
}
