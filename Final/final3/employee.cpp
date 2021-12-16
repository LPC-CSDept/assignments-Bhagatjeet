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
void Employee :: setname(string name)
{
  name = name;
}
void Employee :: setid(int id)
{
  number = id;
}
void Employee :: sethired(string hired)
{
  hiredate = hired;
}