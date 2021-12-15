#include <iostream>
#include <fstream>
#include "course.cpp"
using namespace std;
int binary_search(Course[], int, int);
int recursive_binary_search(Course[], int, int, int);

int main()
{
 ifstream testdata_file("testdata.txt");
 Course course[10];
  int n = 0;
 while(!testdata_file.eof() && n < 10)
 {
    int id, credit;
    string name;
    testdata_file >> id;
    testdata_file >> name;
    testdata_file >> credit;
    Course a(id, name, credit); 
    course[n] = a;
    n++;
 }
 testdata_file.close();
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


}

int binary_search(Course*course, int x, int search_id)
{
  int n=10;
x=0;
  int y = n - 1;

  
}

int recursive_binary_search(Course*course, int y, int z, int search_id)
{
 
}