#include <iostream>
#include "quiz13.cpp"
#include "quiz3.hpp"
using namespace std;

int findMax(Numbers[], int);
void deDup(Numbers &, Numbers &);
int main() 
{
  const int N = 5;
  Numbers numberset[] = {Numbers(1, 5), Numbers(2, 5), Numbers(3, 10), Numbers(4, 5), Numbers(5, 7)};
  for (int i = 0; i < N; i++) 
  {
    cout << "Number Set ID " << numberset[i].getID() << "\t\n";
    numberset[i].printAll();
    cout << "\n";
  }
  int id = findMax(numberset, N);
  cout << "The set ID that has max difference is " << id << "\t";
  cout << "The diff is " << numberset[id-1].getMax() - numberset[id-1].getMin() << endl;
  deDup(numberset[2], numberset[3]);
  cout << "ID 3 - ID 4\n";
  numberset[2].printAll();
  cout << "\n";
  deDup(numberset[0], numberset[1]);
  cout << "ID 1 - ID 2\n";
  numberset[0].printAll();
}

int findMax(Numbers nums[], int size) 
{
    int max = -1;
    int highid = -1;
    for(int i = 0; i < size; i++) 
    {
      int fmax = nums[i].getMax() - nums[i].getMin();
      if(fmax > max) 
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