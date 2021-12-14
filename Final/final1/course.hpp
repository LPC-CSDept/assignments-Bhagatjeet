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
int getId() const;// return course id
  string &getName()const; // return course name
  int getCredit() const;// return course credit
  void setId(int id);//set course id
  void setName(const string &name);//set course name
  void setCredit(int credit); // set course credit
  void print() const;//display course details
};
#endif