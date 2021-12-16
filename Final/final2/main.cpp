#include <fstream>
#include "course.cpp"

int partition (Course array[], int , int );
void quickSort(Course array[], int, int );
void swap(int* a, int* b);
void displayArray(Course arr[], int size);

static int x;
static string Inputfile;
const int n = 10;

int main()
{
  fstream inputfile;
  Course z[10];
}


void operator>>(fstream& inputfile, Course& array){
  int id;
  string name;
  int credit;
  
  inputfile.open(Inputfile, ios :: in);
 inputfile.seekg(x);
  inputfile >> id;
  inputfile >> name;
  inputfile >> credit;

  array.setid(id);
  array.setname(name);
  array.setcredit(credit);

  x = inputfile.tellg();
  x += 1;
  inputfile.close();
}

ostream& operator<<(ostream& y, Course& course)
{
  y << course.getid() << " ";
  y << course.getname() << " ";
  y << course.getcredit() << " ";
  return y;
}