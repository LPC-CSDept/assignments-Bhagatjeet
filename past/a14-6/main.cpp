#include <iostream>
#include "number.hpp"
#include <stdio.h>

using namespace std;

int main()
{
  Numbers n1(10), n2;
  cout << "\n";
  cout << n1;
  cout << "\nEnter the number: ";
  cin >> n2;
  cout << n2;

  return 0;
}