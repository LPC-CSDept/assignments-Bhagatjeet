#include<iostream>
#include<fstream>
using namespace std;
  struct Student
  {
  int sid;
  char sname[20];
  double score[3];
};

int main()
{
struct Student *learn = new struct Student;
std::ifstream in("students.txt"); 
std::ofstream out("students.bin", std::ios::binary);
while(!in.eof()){
  in>>learn->sid; 
  in>>learn->sname;
  for(int i = 0; i<3; i++){
    in>>learn->score[i];
  }
  out.write((char*)&(*learn), sizeof(*learn) );
}

in.close();
out.close();
return 0;
};