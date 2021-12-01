#ifndef 	COURSE_H
#define 	COURSE_H
#include <string>

using namespace std;

class Course{
  private:
    string courseName, semester;
    int credits;
    vector <Student> student;
    static int NUM_COURSES;  
  public:
    Course(){
      courseName = "No Data";
      credits = 0;
      if(student.size() == 0){
        cout << "No Students Enrolled." << endl;
      }
      NUM_COURSES +=1;
    };