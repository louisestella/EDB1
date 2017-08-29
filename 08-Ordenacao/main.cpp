#include "selection_sort.hpp"
#include <iostream>

using namespace std;

int main(){

    int size = 20;
    int v[] = { 1, 3, 5, 12, 49, 56, 43, 32, 2, 8, 0, 21, 25, 29, 4, 16, 31, 34, 23, 190 };

    cout << "This is the initial vector: " << endl << "[";

    for( int i = 0; i < size; i++ ){
        cout << v[i];    
        if( i < size-1 ){
            cout << ", ";
        }
    }

    cout << "]." << endl;

    selection_sort( v, size );

    cout << "After the selection sort: " << endl << "[";

    for( int i = 0; i < size; i++ ){
        cout << v[i];    
        if( i < size-1 ){
            cout << ", ";
        }
    }

    cout << "]." << endl;
    return 0;
}
