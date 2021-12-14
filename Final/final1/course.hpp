#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;

class Course
{
  private:
  int id; // store the course id
  string name; // store the course name
  int credit; // store the course credit

public:
course(); // default constructor
  Course(int id, string name, int credit);// parameterized constructor

  void print() const;//display course details

};
