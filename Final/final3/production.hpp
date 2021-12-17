#ifndef PRODUCTION_H
#include <fstream>
#include "employee.cpp"
using namespace std;

class Production : 
public Employee
{
 protected:
    int shift = 0;
    double hourly = 0;
  public:
    Production() : Employee()
    {
    };
    double getpay();
    int getshift();
    void setshift(int shift);
    void setpay(double money);
  friend class Employee;  
  friend ostream& operator<<(ostream& x, Production& work);
  friend double operator > (const Production& y, const Production& z); 
};
#endif