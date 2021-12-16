#include <iostream>
#include <fstream>
#include "course.cpp"
using namespace std;
int binary_search(Course array[], int, int);
int recursive_binary_search(Course array[], int, int, int);
static int x;
static string Inputfile;
const int n = 10;
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
int main()
{
  fstream inputfile;
 Course course[10];
 
  Inputfile = "Final/final2/textdata.txt";
  int n = 0;

 for(int i = 0; i < n; i++)
  {
    inputfile >> course[i];
  }
 
    int select;
 while(true)
 {
    cout << "Enter id to search for course:";
    cout << "Enter 11 to exit the program ";
    cin >> select;
    if(select == 11)
    {
      break;
    }
 }
 int b = binary_search(course, n, select);
 int c = recursive_binary_search(course, 0, n - 1, select);
if(b != -1)
 {
   {
      cout << "Course found " << b << endl;
      cout << "Result of binary search: ";
      course[b].print();
      cout << "Result  recursive binary search: ";
      course[c].print();
      cout << endl;
   }
 }
}
inputFile.close();
  return 0;

}

int binary_search(Course*course, int x, int search_id)
{
  int n=10;
x=0;
  int y = n - 1;
while(x <= y)
  {
    int m = x+(y-x)/2;

    if(course[m].getid() == search_id)
    {
      return m;
    }

    if(course[m].getid() < search_id)
    {
      x = m + 1;
    }

    else
    {
      y= m - 1;
    }
  }
  return -1;
}

int recursive_binary_search(Course*course, int y, int z, int search_id)
{
   while(y <= z)
  {
    int m = y+(z-y)/2;

    if(course[m].getid() == search_id)
    {
      return m;
    }

    if(course[m].getid() < search_id)
    {
      return recursive_binary_search(course, m + 1, z, search_id);
    }
    else
    {
      return recursive_binary_search(course, y, m - 1, search_id);
    }
  }
  return -1;
}