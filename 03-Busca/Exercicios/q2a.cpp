#include <iostream>

using namespace std;

int findIndex(int v[], int size, int key);

int main(){
    int list[] = { 0, 1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 9, 10, 12, 35, 37, 37, 38, 40 };
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

    cout << "Choose a KEY to search for in this array." << endl;
    cin >> key;

    cout << findIndex( list, size, key ) << endl;

    
    
    return 0;
}

//function to return the first index number of a given key (if there is one)
int findIndex(int v[], int size, int key){
    int begin = 0;
    int end = size-1;
    int middle = (begin + end) / 2;

    while( begin <= end ){
        middle = (begin + end) / 2;
        if( key == v[middle-1] || v[middle] > key ){
            end = middle - 1;
        } else if( v[middle] < key ){
            begin = middle + 1;
        } else{
            return middle;
        }
    }
    return -1; // NOT_FOUND
}
