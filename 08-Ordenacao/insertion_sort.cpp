#include "insertion_sort.hpp"

void insertion_sort( int v[], int size ){
    for( int i = 1; i < size; i++ ){
        int aux = v[i];     // aux = first unknown element
        int j = i - 1;      // j = the end of the ordered part
        while( j >= 0 && aux < v[j] ){
            v[j+1] = v[j];  // deslocates elements to the right
            j = j-1;        // goes back on the ordered part to push them to the right
        }
        v[j+1] = aux;       // inserts aux(ex-unknown element) in to its place
    }
    
}

void rec_insertion_sort( int [], int, int );
