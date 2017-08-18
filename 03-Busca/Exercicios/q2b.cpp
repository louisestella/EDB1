#include <iostream>

using namespace std;

int countIndexes( int v[], int size, int key );
int findLeftIndex( int v[], int size, int key );
int findRightIndex( int v[], int size, int key );

int main(){
    int list[] = { 0, 1, 1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 9, 9, 10, 12, 35, 37, 37, 38, 40 };
    int size = 21;
    int key = -1;

    cout << endl << "This is your array:" << endl << "[";    
    for( int i = 0; i < size; i++ ){
        cout << list[i];
        if ( i < size-1 ){
            cout << ", ";
        }
    }
    cout << "]." << endl;

    cout << endl << "Choose a KEY to search for in this array." << endl;
    cin >> key;

    cout << endl << "The number of times this KEY appeared in this array is: " << countIndexes( list, size, key ) << "." << endl << endl;

    
    
    return 0;
}


//function that returns how many times a given key (if there is one) appears on a list
int countIndexes(int v[], int size, int key){

    int first = 0;
    int last = 0;

    first = findLeftIndex( v, size, key );
    last = findRightIndex( v, size, key ); 

    if( first == -1 && last == -1 ){
        return 0; // NOT_FOUND
    } else{
        cout << last << " = last." << first << " = first" << endl;
        return last - first + 1;
    }
}


//function to return the first index number of a given key (if there is one)
int findLeftIndex( int v[], int size, int key ){

    int begin = 0;
    int end = size-1;
    int middle = (begin + end) / 2;

    while( begin <= end ){
        middle = (begin + end) / 2;
        if( v[middle] == v[middle-1] || v[middle] > key ){
            end = middle - 1;
        } else if( v[middle] < key ){
            begin = middle + 1;
        } else{
            return middle;
        }
    }

    return -1; // NOT_FOUND
}


//function to return the last index number of a given key (if there is one)
int findRightIndex( int v[], int size, int key ){

    return -1; // NOT_FOUND
}
