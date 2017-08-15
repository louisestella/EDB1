#include <iostream>

using namespace std;

int search(int v[], int size, int key);

int main(){

    int size = 14;
    int *list = new int[size];
    int k;

    cout << endl << "Type all the elements of your array. Please, use only numbers and press enter after each one." << endl;

    for( int i = 0; i < size; i++){
        cin >> list[i];
    }
    
    cout << endl << "This is your list: [";

    for( int i = 0; i < size; i++ ){
        cout << list[i];
        if ( i < size-1 ){
            cout << ", ";
        }
    }

    cout << "]." << endl;


    cout << "What is the key that you wish to search on the list?" << endl;
    cin >> k;

    if( search( list, size, k ) == -1)
        cout << "KEY NOT FOUND" << endl;
    else
        cout << "The index position of the " << k << " key on the list is: " << search( list, size, k ) << endl;   
    
    return 0;
}

//recursive linear search
int search(int v[], int size, int key){

    if( size < 0 ){
        return -1;
    } else if( v[size-1] == key )
    	return size - 1;
    else
    	return search(v, size - 1, key);
    
}
