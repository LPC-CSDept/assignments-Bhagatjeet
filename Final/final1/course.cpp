#include "course.hpp"
using namespace std;

Course::Course()
{
  id = 0;
  name = " ";
  credit = 0;
}

Course::Course(int id, string name, int credit) : id(id), name(name), credit(credit){}

int Course::getid() const
{
  return id;
}
const string &Course::getname() const
{
  return name;
}

int Course::getcredit() const
{
  return credit;
}