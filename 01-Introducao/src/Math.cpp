//
//  Math.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Math.hpp"

int add(int a, int b)
{
    if( a == 0 ){
      return b;
    }

    else{
      return add( a-1, b ) + 1;
    }
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int factorial(int a)
{
    if ( a == 0 )
    {
      return 1;
    }
    else
    {
      int fat = 1;
      for ( int i = 1; i <= a; i++)
      {
        fat = fat * i;
      }
      return fat; 
    }

}
