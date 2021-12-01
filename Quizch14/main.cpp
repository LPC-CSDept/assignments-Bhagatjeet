#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "students.hpp"
#include "course.hpp"
using namespace std;

int Course :: NUM_COURSES = 0;
static int POS;
void operator>>(fstream& IMPORT, Course& array){
  
  
  IMPORT.open("Ch.14.Quiz/CourseStudents.txt", ios:: in);
  string name, semester;
  int credits, numberOfStudents, sid;
  char grade;
  double score;
  IMPORT.seekg(POS);
  
  

  IMPORT >> name;
  array.setCourseName(name);
  IMPORT >> credits;
  array.setCredits(credits);
  IMPORT >> semester;
  array.setSemester(semester);

  IMPORT >> numberOfStudents;

  for(int i = 0; i < numberOfStudents; i++){
    IMPORT >> sid;
    IMPORT >> name;
    IMPORT >> grade;
    IMPORT >> score;
    array.setStudentFile(sid,name,score);
  }
  POS = IMPORT.tellg();
  POS += 1;
  IMPORT.close();

}
ostream& operator<<(ostream& COUT, Course& E){
  COUT << endl;
  COUT << "Course: " << E.getCourseName() << endl; 
  COUT << "Credits: " << E.getCredits() << endl;
  COUT << "Semester: " << E.getSemester() << endl;
  COUT << "     ";
  E.getStudent1();
  return COUT;
};

int main() {
  srand(time(NULL));
  fstream courseFile, addStudent;
  Course courses[4];

  cout << endl;

  for(int i = 0; i < 4; i++){
    courseFile >> courses[i];
  }
 
  addStudent.open("Ch.14.Quiz/addstudent.txt", ios :: in);

  string courseName, sName;
  int students,sid;
  char grade;
  double score;

  for(int q = 4; q<6; q++){
    addStudent >> courseName;
    addStudent >> students;
    for(int w = 0; w < 4; w++){
            if(courses[w].getCourseName() == courseName){
        for(int i = 0; i < students; i++){
          addStudent >> sid;
          addStudent >> sName;
          addStudent >> grade;
          addStudent >> score;
          courses[w].setStudentFile(sid, sName, score);
        }
      }
    }    
  }
  addStudent.close();
for(int i = 0; i < 4; i++){
    cout << courses[i];
  }
} 