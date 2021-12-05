#include <iostream>
#include <string>
#include "student.hpp"

using namespace std;

int main()
{
  string line;
  ifstream file("student.txt");
  if(file.is_open())
  {
    while(getline(file,line))
    {
      int y = 10;
  student x[10];

  for(int i = 0; i < y; i++)
  {
    cout << "enter student id: ";
    cin >> x[i].id;
    cout << "enter student name: ";
    cin >> x[i].name;
    cout << "enter score 1: ";
    cin >> x[i].score1;
    cout << "enter score 2: ";
    cin >> x[i].score2;
    cout << "enter score 3: ";
    cin >> x[i].score3;
    x[i].total_scores = x[i].score1 + x[i].score2 + x[i].score3;
  }
   x[y].display(x,y);
  int i = x[10].binarysearch(x, y,34);
} 
    file.close();
  }
}