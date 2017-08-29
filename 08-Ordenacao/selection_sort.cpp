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
