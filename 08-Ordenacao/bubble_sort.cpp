#include "bubble_sort.hpp"

void bubble_sort( int v[], int size){

    bool flag = true;
    
    while( flag ){

        flag = false;

        for( int i = 0; i < size; i++ ){

            if ( v[i] > v[i+1] ){
                swap( v[i], v[i+1] );
                flag = true;
            }
        }

        size--;

    }
}
