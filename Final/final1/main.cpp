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
}
 testdata_file.close();

}

int binary_search(Course*course, int x, int search_id)
{

}

int recursive_binary_search(Course*course, int y, int z, int search_id)
{
 
}