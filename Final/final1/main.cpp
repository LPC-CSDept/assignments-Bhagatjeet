#include <iostream>
#include <fstream>
#include "course.cpp"
using namespace std;

Course binary_search(Course array[], int, int);
Course recursive_binary_search(Course array[], int, int, int);
static int x;
static string Inputfile;
const int n = 10;
void operator>>(fstream& inputfile, Course& array)
{
  int id;
  string name;
  int credit;
  
  ifstream testdata_file("testdata.txt");

 Course course[10];
  int n = 0;
 while(!testdata_file.eof() && n < 10){
  inputfile >> id;
  inputfile >> name;
  inputfile >> credit;

  array.setid(id);
  array.setname(name);
  array.setcredit(credit);
    Course a(id, name, credit); 
  x ++;
 }
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
 
  Inputfile = "Final/final1/textdata.txt";
  

 for(int i = 0; i < n; i++)
  {
    inputfile >> course[i];
  }
 for(int i = 0; i < n; i++){
    
    cout << course[i].getid() << endl;
  }
    int select;
cout << "Enter ID for course: ";
  cin >> select;
 
   int size = sizeof(course)/sizeof(course[0]);

 Course r;

  r = recursive_binary_search(course,select, 0, n-1);
  cout << endl;
  cout << "Found: " << endl;
  cout << r;
  cout << endl;
  r = binary_search(course,size-1,select);
  cout << endl;
  cout << "Found: " << endl;
  cout << r;

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
      result = recursive_binary_search(array, search_id, y, z - 1);
    else 
      result = recursive_binary_search(array,search_id, m + 1, z);
  }  
  return result;
}