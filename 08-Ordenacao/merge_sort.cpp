#include "merge_sort.hpp"

void merge_sort( int v[], int left, int right ){
    int middle = (left + right) / 2;

    if( left < right ){
        merge_sort( v, left, middle );
        merge_sort( v, middle+1, right );
        merge( v, left, middle, right );    
    }
}

void merge( int v[], int begin1, int end1, int end2 ){
    int begin2 = end1 + 1;
    int i = begin1;
    int j = begin2;
    int k = 0;
    int *temp = new int[end2]; 

    while( i <= end1 && j <= end2 ){
        if( v[i] <= v[j] ){
            temp[k] = v[i];
            i++;
        }
        else{
            temp[k] = v[j];
            j++;
        }
        k++; 
    }

    while( i <= end1 ){
        temp[k] = v[i];
        i++;
        k++;
    }

    while( j <= end2 ){
        temp[k] = v[j];
        j++;
        k++;
    }

    //COPY temp to v
    for( int i = begin1, j = 0; i <= end2; i++, j++ ){
        v[i] = temp[j];
    }

    delete[] temp;
    temp = nullptr;
}
