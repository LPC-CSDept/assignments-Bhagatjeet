#include <iostream>
#include <fstream>
using namespace std;

const int NUMCOURSE = 2;
struct Student
{
    int id;
    string name;
    double score[2];
    double sum;
    double avg;
};

int main()
{
ifstream ifs;
ofstream ofs;
Student x;
ifs.open("student.txt");
ofs.open("student.bin");

for(int i=0; i<10; i++)
{
ifs >> x.id;
ifs >> x.name;
ifs >> x.score[0];
ifs >> x.score[1];
x.sum = x.score[0] + x.score[1];
x.avg = x.sum/2;
}

for(int i=0; i<10; i++)
{
cout << x.id << "\t";
cout << x.name << "\t";
cout << x.score[0] << " " << x.score[1] << "\t";
cout << x.sum << " " << x.avg << "\t";
}
for(int i=0; i<10; i++)
{
ofs.write((char *)&x, sizeof(x));
}
}