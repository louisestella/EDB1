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
    float result = add(1, 1);
    
    if(result != 2)
    {
        std::cout << "1st test failed" << std::endl;
    }
    
    result = add(-1, 1);
    
    if(result != 0)
    {
        std::cout << "2nd test failed" << std::endl;
    }
    
    result = add(-1, -1);
    
    if(result != -2.0)
    {
        std::cout << "3rd test failed" << std::endl;
    }
    
    result = add(0, 0);
    
    if(result != 0)
    {
        std::cout << "4th test failed" << std::endl;
    }
    
    result = add(1, -1);
    
    if(result != 0)
    {
        std::cout << "5th test failed" << std::endl;
    }
    
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