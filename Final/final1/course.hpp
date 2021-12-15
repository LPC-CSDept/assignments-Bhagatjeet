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
  Course(int id, string name, int credit);// parameterized constructor
int getid() const;// return course id
 const string &getname()const; // return course name
  int getcredit() const;// return course credit
  void setid(int id);//set course id
  void setname(const string &name);//set course name
  void setcredit(int credit); // set course credit
  void print() const;//display course details
};
#endif