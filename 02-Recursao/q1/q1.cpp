#include <iostream>
#include <vector>

using namespace std;

string reverseString( string str, string reversed, int size  );

int main()
{
    string str = "flesym htiw od ot tahw wonk t'nod tsuj I";
    string reversed = "";

    cout << "Type a text to see it reversed..." << endl << endl; 
    cin >> str;

    int size = str.length();

    cout << reverseString( str, reversed, size ) << endl; 

    return 0;
    
}

//recursive function to revert a string 
string reverseString( string str, string reversed, int size )
{

    if ( size <= 0 )
    {
        reversed = reversed + str[size];
        return reversed;
    }
    else
    {
        reversed = reversed + str[size];
        return reverseString( str, reversed, size-1 );
    }

}
