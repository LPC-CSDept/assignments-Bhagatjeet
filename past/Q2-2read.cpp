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
  double average;
struct Student *learn = new struct Student;
ifstream in("students.bin",ios::binary);
while(!in.eof())
{
in.read((char*)&(*learn), sizeof(*learn));
average = 0;
for(int i = 0; i<3; i++)
average = average+learn->score[i];
average = average/3;  

if(average>85){
  cout<< learn -> sid <<" "<<learn -> sname << " " ;
  for(int i=0; i<3; i++){
cout<< learn -> score[i] << " " ;
  }
  cout<<endl;
}
else
{
  cout << "the average is below 85, so student info could not be shown." << endl;
}
}
in.close();
return 0;
}