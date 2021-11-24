#include "class.hpp"
#include "student.hpp"
#include <cstring>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int Course::NUM_COURSES = 0;

Course::Course()
{
  NUM_COURSES += 1;
}

Course::Course(string cname, int credits, string semester, vector <Student> student)
{
  this->cname = cname;
  this->credits = credits;
  this->semester = semester;
  this->student = student;

  NUM_COURSES += 1;
}