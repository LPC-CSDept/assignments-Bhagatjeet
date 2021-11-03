#include <iostream>
#include "quiz3.hpp"
using namespace std;

Numbers::Numbers() 
{
  id = -1;
  numbers.reserve(0);
}

Numbers::Numbers(int setID, int size) 
{
  id = setID;
  numbers.reserve(size);
  for(int i=0; i<size; i++) 
  {
    numbers.push_back((rand() % 99));
  }
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
}

int Numbers::getMax() const 
{
  if(numbers.size() == 1) 
  {
    return numbers[0];
  } 
  else 
  {
    int max = numbers[0];
    for(int i = 0; i < numbers.size() - 1; i++) 
    {
      int current = numbers[i];
      if(current > max) 
      {
        max = current;
      }
    }
    return max;
  }
}

