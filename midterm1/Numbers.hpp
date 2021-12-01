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
  static int numOfObjects;

  public:
  Numbers()
  {
    ID = 0;
    numOfObjects++;
  }

  Numbers(int i, int n)
  {
    ID = i;
    for(i = 0; i < n; i++)
    {
      int num = (rand() % (99 - 0 + 1)) + 0;
      values.push_back(num);
    }
    numOfObjects++;
  }
  int getID()
  {
    return ID;
  }
  static int getNumObjects()
  {
    return numOfObjects;
  }

  friend void printNumbers(Numbers n);

  bool operator >(const Numbers &n2)
  {
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < values.size(); i++)
        sum1 += values[i];

    for(int i = 0; i < n2.values.size(); i++)
         sum2 += n2.values[i];
