#include <iostream>
#include "quiz3.hpp"
using namespace std;

Numbers::Numbers() 
{
  id = -1;
  numbers.reserve(0);
}


int Numbers::getID() const 
{
  return id;
}

int Numbers::getSize() const 
{
  return numbers.size();
}

int Numbers::getElm(int i) const {
 
    return numbers[i];
  
  throw -1;
}