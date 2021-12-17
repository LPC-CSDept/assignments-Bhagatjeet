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
    double getpay();
    int getshift();
    void setshift(int shift);
    void setpay(double money);
  friend class Employee;  
  friend ostream& operator<<(ostream& x, Production& worker);
  friend double operator > (const Production& y, const Production& z); 
};
#endif