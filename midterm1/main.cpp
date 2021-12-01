#include<iostream>
#include"Numbers.hpp"
using namespace std;
int main()
{
  srand(time(0));
  Numbers n1(112, 14);
  srand(time(0));
  Numbers n2(478, 6);
  cout << "Object1: ";
  printNumbers(n1);
  printNumbers(n2);
  if(n1 > n2)
  cout << "\nObject 1 numbers are greater than Object 2";
  else 
  cout << "\nObject 2 numbers are greater than Object 1";
  return 0;
}