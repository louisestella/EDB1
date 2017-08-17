#include <iostream>

using namespace std;

bool Sum_2( int *v, int size, int sum );
bool Bin_Sum_2( int *v, int size, int sum );

int main(){
    int x;
    int size;
 
    cout << "What is the size of your array?" << endl;
    cin >> size;
    
    int *numbers = new int[size];

    cout << endl << "Now type all the elements of your array. Please, use only numbers and press enter after each one." << endl;

    for( int i = 0; i < size; i++ ){
        cin >> x;
        numbers[i] = x;
    }


    cout << endl << "This is your array: [";

    for( int i = 0; i < size; i++ ){
        cout << numbers[i];
        if ( i < size-1 ){
            cout << ", ";
        }
    }

    cout << "]." << endl;

    cout << "Now give me a number to check if we have two elements in the array that sum up to it." << endl;

    cin >> x;

    Bin_Sum_2( numbers, size, x );    

    delete[] numbers;
    return 0;
}

// function that return 2 elements of an array which sum up to a given X with complexity theta(n*n)
bool Sum_2( int *v, int size, int sum ){
     for( int i = 0; i < size; i++ ){
        for( int j = 0; j < i; j++ ){
            if( v[i] + v[j] == sum){
                cout << "The two elements of your array are: " << endl;
                cout << v[i] << " + " << v[j] << endl;
                return true;
            }
        }
     }
     cout << "There is NOT two elements that sum up to " << sum << "." << endl;
     return false;
}


// function that return 2 elements of an array which sum up to a given X with complexity theta( n*lg(n) )
bool Bin_Sum_2( int *v, int size, int sum ){


    for( int i = 0; i < size; i++ ){
        int begin = 0;
        int end = size-1;
        int middle = (begin + end) / 2;      
//        begin = 0;
//        end = size-1;    

        while( begin <= end){
            middle = (begin + end) / 2;
            if( (v[i] + v[middle]) < sum ){        
                begin = middle + 1;
            } else if( (v[i] + v[middle]) > sum ){        
                end = middle - 1;
            } else if( v[i] + v[middle] == sum ){
                cout << "The two elements of your array are: " << endl;
                cout << v[i] << " + " << v[middle] << endl;
                return true;
            }        
        }
    }
    cout << "There is NOT two elements that sum up to " << sum << "." << endl;
    return false;
}
