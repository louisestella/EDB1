#include "selection_sort.hpp"

void selection_sort(int v[], int size){
    int min = 0;
    for( int i = 0; i < size; i++){
        min = i;
        for( int j = i+1; j < size; j++ ){
            if( v[min] > v[j] ){
                min = j;
            }
        }
        if( min != i){
            swap( v[min], v[i]);
        }
    }
}

void rec_selection_sort( int v[], int first, int last ){

    int min = first;

    for( int i = first; i < last; i++ ){
        if( v[i] < v[min] ){
            min = i;
        }
    }
    
    swap( v[min], v[first] );

    if( first != last){
        rec_selection_sort( v, first+1, last );
    }
}
