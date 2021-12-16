#include <iostream>
#include "employee.hpp"

using namespace std;

Employee :: Employee()
{
  name = "";
  number = 0;
  hiredate = "";
};
Employee :: Employee(string name, int id, string hired)
{
  name = name;
  number = id;
  hiredate = hired;
};
string Employee :: getname()
{
  return name;
} 
int Employee :: getid()
{
  return number;
}
string Employee :: gethired()
{
  return hiredate;
}
