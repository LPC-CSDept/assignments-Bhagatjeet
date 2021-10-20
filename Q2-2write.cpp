#include <iostream>
#include <fstream>
using namespace std;
const int NAME =20;
const int SCORES =3;
struct student{
  int sid;
  char sname[NAME];
  double score[SCORES];
};

int main()
{
  student *ptr = new student;
  fstream file;
  file.open("student.bin");
  file >> ptr->sid;
  file >> ptr->sname;
  file >> ptr->score[0];
  file >> ptr->score[1];
  file >> ptr->score[2];
  file.write((char *)&(*ptr),sizeof(*ptr));
}