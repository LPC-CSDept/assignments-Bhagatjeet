#include "production.cpp"
using namespace std;

static int a;
static string inputfile;
static double maximum = 0;
ostream& operator<<(ostream& x, Employee& worker)
{
  return x;
}
double operator > (const Production& y, const Production& z)
 {
cout << "Paid more: " << endl;
  cout << y.name << "'s Pay: " << y.hourly << endl;
  cout << z.name << "'s Pay: " << z.hourly;

  cout << "If the result is: 1, " <<y.name << " is paid more." << endl;
  cout << "If the result is: 0, " <<y.name << " is not paid more." << endl;
  return y.hourly > z.hourly;
 }
 ostream& operator<<(ostream& x, Production& work)
 {
  x << "Name: " << work.getname() << endl;
  x << "ID: " << work.getid()<< endl;
  x << "Hire Date: " << work.gethired()<< endl;
  x << "Shift: " << work.getshift()<< endl;
  x << "Pay: " << work.getpay()<< endl;
  return x;
 }
 void high(Production *array){
  Production highest;
  for(int i = 0; i < 10; i++)
    if(array[i].getpay() > maximum)
    {
      maximum = array[i].getpay();
      highest = array[i];
    }
 cout << highest;
}
void operator>>(fstream& InputFile, Production& array)
{
  inputfile = "FINAL/final3/testdata.txt"; 
  InputFile.open(inputfile, ios :: in); 
  int id, shift;
  string name, date;
  double pay;
  InputFile.seekg(a);
  InputFile >> id;
  InputFile >> name;
  InputFile >> date;
  InputFile >> shift;
  InputFile >> pay;
  array.setname(name);
  array.setid(id);
  array.sethired(date);
  array.setshift(shift);
  array.setpay(pay);
  InputFile.tellg();
  a += 1;
  InputFile.close();
}

int main()
{
  fstream InputFile;
  Production p[10], result;
  for(int i = 0; i < 10; i++){
    InputFile >> p[i]; 
  }
  cout <<  "List: " << endl;
  for(int i = 0; i < 10; i++)
  {
    cout << p[i] << endl;  
  }
  cout << endl;
  cout << "Paid most:" << endl;
  high(p);
  cout << endl;
  int find = p[7] > p[4];
  cout << "Result: " << find;
}