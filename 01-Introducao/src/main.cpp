//
//  main.cpp

//  Created by Eiji Adachi Medeiros Barbosa 
//

#include <iostream>
#include <cassert>
#include "Math.hpp"

void testAdd();
void testSubtract();

int main(int argc, const char * argv[]) {
    
    testAdd();
    testSubtract();
    
    std::cout << "All tests passed!\n";
    return 0;
}

void testAdd()
{
    assert( add(1, 1) == 2 );
    assert( add(-1, 1) == 0 );
    assert( add(1, 11) == 12 );
    assert( add(0, 5) == 5 );
    assert( add(-1, -1) == -2 );
    
    std::cout << "All add-tests passed!\n";
}

void testSubtract()
{
    assert( subtract(1, 1) == 0 );
    assert( subtract(-1, 1) == -2 );
    assert( subtract(-1, -1) == 0 );
    assert( subtract(0, 0) == 0 );
    assert( subtract(1, -1) == 2 );
    
    std::cout << "All subtract-tests passed!\n";
}
