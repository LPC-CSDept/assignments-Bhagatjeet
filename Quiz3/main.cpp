#include <iostream>
#include "quiz13.cpp"
#include "quiz3.hpp"
using namespace std;

int findMax(Numbers[], int);
void deDup(Numbers &, Numbers &);
int main() 
{
  
}

int findMax(Numbers nums[], int size) 
{
    int max = -1;
    int highid = -1;
    for(int i = 0; i < size; i++) 
    {
      int max = nums[i].getMax() - nums[i].getMin();
      if(max > max) 
      {
        max = max;
        highid = nums[i].getID();
      }
    }
    return highid;
}

void deDup(Numbers& fSet, Numbers& sSet) 
{
  for(int i = 0; i < sSet.getSize()-1; i++) 
  {
    fSet.deleteElm(sSet.getElm(i));
  }
}