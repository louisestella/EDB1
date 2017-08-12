#include <iostream>

using namespace std;

void toBinary(int n);

int main(){
    int decimal = 0;

    cout << "Enter a positive number." << endl;
    cin >> decimal;

    cout << "The binary correspondent number is..." << endl;

    toBinary(decimal);
    cout << endl;


}

//recursive decimal to binary function
void toBinary(int n){

    if( n != 0 ){

        toBinary( n/2 );
     
        if ( n % 2 == 0 ){
            cout << "0";
        } else {
            cout << "1";
        }
    }

}
