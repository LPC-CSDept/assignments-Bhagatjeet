#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;
class Numbers
{
  private:
  int ID;
  vector<int>values;
  static int numObjects;
  public:
  Numbers()
  {
    ID = 0;
    numberObjects++;
  }
  Numbers(int i, int )y
  {
    ID = i;
    for(i = 0; i < y; i++)
    {
      int number = (rand() % (99 - 0 + 1)) + 0;
      values.push_back(number);
    }
    numberObjects++;
  }
  int getID()
  {
    return ID;
  }
  static int getObjects()
  {
    return numberObjects;
  }
  friend void printNumbers(Numbers x);

  bool operator >(const Numbers &x2)
  {
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < values.size(); i++)
        sum1 += values[i];
    for(int i = 0; i < x2.values.size(); i++)
         sum2 += x2.values[i];
if(sum1 > sum2)
    return true;
    else
    return false;         
  }
};

int Numbers::numberObjects = 0;
void printNumbers(Numbers z)
{
  cout << "\nNumbers are: ";
  for(int i = 0; i < z.values.size(); i++)
  cout << z.values[i] << " ";
}