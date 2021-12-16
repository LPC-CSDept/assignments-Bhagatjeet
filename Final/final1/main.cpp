#include <iostream>
#include <fstream>
#include "course.cpp"
using namespace std;
Course binary_search(Course array[], int, int);
Course recursive_binary_search(Course array[], int, int, int);
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

inputfile.close();
  return 0;

}

Course binary_search(Course array[], int x, int search_id)
{
  Course results;
bool w = false;
  int y = 0;
  int z =0;
while(y <= x && !x)
{
    z = (y + x) / 2;
    if(search_id > array[z].getid())
      y = z + 1;
    else if(search_id < array[z].getid())
      x = z - 1;
    else if(search_id == array[z].getid()) 
    {
      w=true;
      results = array[z];
    }
    
  }
  return results;
}

Course recursive_binary_search(Course array[], int y, int z, int search_id)
{
 Course result;

  if(y > z)
    return Course();
  else{
    int m = (y + z) / 2;
    if(search_id == array[m].getid())
      result = array[m];
    else if (search_id < array[m].getid())
      result = recursive_binary_search(search_id, array, y, z - 1);
    else 
      result = recursive_binary_search(search_id, array, m + 1, z);
  }  
  return result;
}