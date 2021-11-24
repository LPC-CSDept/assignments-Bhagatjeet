#include <iostream>
#include "student.cpp"
#include "class.hpp"
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
  int N = 4;
  Course courses[N];
  ifstream ifs;
  ifs.open("class.txt");
  for(int i = 0; i<N; i++)
  {
    ifs >> courses[i];
    cout << courses[i] << endl;
  }
  ifs.close();
  ifs.open("student.txt");
  