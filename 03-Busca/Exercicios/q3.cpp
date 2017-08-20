#include <iostream>

using namespace std;

int ternary_search( int v[], int begin, int end, int key );
int rec_ternary_search( int v[], int begin, int end, int key );

int main(){

    int list[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 29, 39, 50, 52, 65, 77, 87, 98, 140 };
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

    cout << endl << "The index of your key is: " << endl << rec_ternary_search( list, 0, size-1, key ) << endl;

    return 0;
}


// iterative version of the ternary search
int ternary_search( int v[], int begin, int end, int key ){
    int middle = 0;
    int mid1 = 0;
    int mid2 = 0;

    while( begin <= end ){
        middle = (begin + end) / 2;
        mid1 = (begin + middle) / 2;
        mid2 = (middle + end) / 2;
        
        if( v[mid1] > key ){
            end = mid1 - 1;
        } else if( v[mid1] < key && v[mid2] > key ){
            begin = mid1 + 1;
            end = mid2 - 1;
        } else if( v[mid2] < key ){
            begin = mid2 + 1;
        } else if( key == v[mid1] ){
            return mid1;
        } else{
            return mid2;
        }        
    }
    return -1; // NOT_FOUND
}


// recursive version of the ternary search
int rec_ternary_search( int v[], int begin, int end, int key ){

    int middle = (begin + end) / 2;;
    int mid1 = (begin + middle) / 2;
    int mid2 = (middle + end) / 2;

    if( v[mid1] > key ){
        return rec_ternary_search( v, 0, mid1-1, key );
    } else if( v[mid1] < key && v[mid2] > key ){
        return rec_ternary_search( v, mid1+1, mid2-1, key );
    } else if( v[mid2] < key ){
        return rec_ternary_search( v, mid2+1, end, key );
    } else if( key == v[mid1] ){
        return mid1;
    } else{
        return mid2;
    }        

    return -1; // NOT_FOUND
}
