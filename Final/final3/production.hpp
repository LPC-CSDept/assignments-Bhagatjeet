#ifndef PRODUCTION_H
#include "employee.cpp"
using namespace std;

class Production : 
public Employee
{
 protected:
    int shift = 0;
    double hourly = 0;
  public:
    production() : Employee()
    {
    };
    
};
#endif