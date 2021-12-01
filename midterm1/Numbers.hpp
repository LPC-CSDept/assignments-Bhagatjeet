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