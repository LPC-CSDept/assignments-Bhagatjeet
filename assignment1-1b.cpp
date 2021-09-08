#include <iostream>
#include <fstream>
using namespace std;

struct Student 
{
  int id;
  char name[20];
  double score[2];
  double sum;
  double avg;
};

int main()
{
	ifstream ifs;
	Student x;

	ifs.open("students.bin");

	ifs.read( (char *)&x, sizeof(x) );

	cout << "ID " << x.id << "\t";
	cout << "Name " << x.name << "\t";
	cout << "Score1 " << x.score[0] << "\t";
	cout << "Score2 " << x.score[1] << "\t";
	cout << "Sum " << x.sum << "\t";
	cout << "Avg " << x.avg << "\n";

}