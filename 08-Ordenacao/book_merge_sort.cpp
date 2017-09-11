#include "merge_sort.hpp"

void book_merge_sort( int v[], int left, int right ){

    int middle = 0;

    if( left < right ){

        middle = ( (left + right) / 2 );

        merge_sort( v, left, middle );
        merge_sort( v, middle+1, right );
        merge( v, left, middle, right );    
    }
}

void book_merge( int v[], int first, int middle, int last ){

    int l_size = middle - first + 1; // size of first half of original vector
    int r_size = last - middle;      // size of last half of original vector

    int *left = new int[l_size];     // new vector for first half
    int *right = new int[r_size];    // new vector for last half


    // creates the first half vector
    for( int i = 0; i < l_size; i++ ){
        left[i] = v[first + i - 1];
    }

    // creates the second (and last) half of vector
    for( int j = 0; j < r_size; j++ ){
        right[j] = v[middle + j];
    }

    // variables to go through the right and left vectors
    int l_index = 1;
    int r_index = 1;

    // merges the left and right vectors into the original one
    for(int k = first; k <= last; k++ ){
        if( left[l_index] <= right[r_index] ){
            v[k] = left[l_index];
            l_index++; 
        }
        else{
            v[k] = right[r_index];
            r_index++;
        }
    }

    // destroy temp vectors
    delete[] left;
    delete[] right;
    left = nullptr;
    right = nullptr;
}
