#include <iostream>
#include "student.cpp"
#include "class.hpp"
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
  int N = 4;
  Course courses[N];
  ifstream ifs;
  ifs.open("class.txt");
  for(int i = 0; i<N; i++)
  {
    ifs >> courses[i];
    cout << courses[i] << endl;
  }
  ifs.close();
  ifs.open("student.txt");
  string courseId;
  while (ifs >> courseId)
  {
    cout << "Course ID: " << courseId << endl;
    int courseIndex;
    for(int i = 0; i < Course::getNumCourses(); i++)
    {
      if(courses[i].getCName() == courseId)
      {
        courseIndex = i;
      }
    }
int numStudent;
ifs >> numStudent;

    for(int i = 0; i < numStudent; i++)
    {
      int ID;
      string sname;
      char grade;
      double scores;
      ifs >> ID >> sname >> grade >> scores;
      Student s(ID, sname, grade, scores);
      courses[courseIndex].addStudent(s);
    }

    cout << "Updated Students list for the course: " << endl;
    cout << courses[courseIndex] << endl;
  }

  ifs.close();

  for(int i = 0; i<Course::getNumCourses(); i++)
  {
    cout << courses[i] << endl;
  }
}

ifstream &operator>>(ifstream &ifs, Course &c)
{
  string cname;
  int credits;
  string semester;
  ifs >> cname >> credits >> semester;

  int numStudent;
  ifs >> numStudent;