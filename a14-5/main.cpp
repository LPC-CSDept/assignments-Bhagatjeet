#include "Numbers.hpp"
#include <iostream>
using namespace std;

int main()
{
  Numbers n1(10);
  Numbers n2;
  n2 = n1;

  cout << "Display n1: ";
  printNumbers(n1);

  cout << "\nDisplay n2: ";
  printNumbers(n2);
  
  cout << "\nn1>n2= ";
  cout << (n1>n2) << endl;

  Numbers n3 = n1 + n2;
  cout << "\nDisplay n3: ";
  printNumbers(n3);
  return 0;
}