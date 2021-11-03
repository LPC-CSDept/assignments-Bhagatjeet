
#ifndef Number_H
#define Number_H
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class NUMBERS
{
  private:
  int ID;
  vector <int> numbers;
  public:
  int getID() const;
  int getSize() const;
  int getElm(int i) const;
  int getMax() const ;
  int getMin() const;
  int getSum() const;
  void deleteElm(int d) ;
  void addElm(int a) ;
  void printAll( ) const;
}
