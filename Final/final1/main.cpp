#include <iostream>
#include <fstream>
#include "course.cpp"
using namespace std;
int binary_search(Course[], int, int);
int recursive_binary_search(Course[], int, int, int);

int main()
{
  fstream inputFile;
 inputFile.open("Final/final1/testdata.txt", ios::in);
if (inputFile.fail()) {
  cout << "Failed to open the file" << endl;
}
else {
 Course course[10];
  int n = 0;
 while(!inputFile.eof() && n < 10)
 {
    int id, credit;
    string name;
    inputFile >> id;
    inputFile >> name;
    inputFile >> credit;
    Course a(id, name, credit); 
    course[n] = a;
    n++;
 }
 inputFile.close();
 for(int i = 0; i < n; i++)
 {
    for(int j = 0; j < n - i - 1; j++)
    {
      if(course[j].getid() > course[j+1].getid())
      {
        Course a = course[j];
        course[j] = course[j + 1];
        course[j + 1] = a;
      }
    }
 }
    int select;
 while(true)
 {
    cout << "Enter id to search for course:";
    cout << "Enter 11 to exit the program";
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