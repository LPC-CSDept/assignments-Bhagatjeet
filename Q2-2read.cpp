#include <iostream>
#include <fstream>
using namespace std;
const int NAME =20;
const int SCORES =3;
struct student{
  int sid;
  char sname[NAME];
  double score[SCORES];
  double size;
};

int main()
{
  student *ptr = new student;
  fstream file;
  file.open("student.bin");
  file.read((char *)&(*ptr), sizeof(*ptr));
  ptr->size = sizeof(*ptr);
  double sum, average;
  for(int i=0;i<30;i++)
  {
    sum = ptr->score[i] + ptr->score[i+1] + ptr->score[i+2];
    average = sum/3;
    for(int j=0;j<10;j++)
    {
      if(average > 85)
      {
        cout << " the student name is " << ptr->sname << endl;
        cout << " the student id is " << ptr->sid << endl;
        cout << " the student first score is " << ptr->score[0] << endl;
        cout << " the student second score is " << ptr->score[1] << endl;
        cout << " the student third score is " << ptr->score[2] << endl;
        cout << endl << endl;
      }
      else
        cout << " the student's average score is below 85, so student info will not be revealed. " << endl;
  }
  }
}