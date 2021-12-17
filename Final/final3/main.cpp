#include "production.cpp"
using namespace std;

static int a;
static string inputfile;
static double max = 0;
ostream& operator<<(ostream& x, Employee& worker)
{
  return x;
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
 double operator > (const Production& y, const Production& z)
 {

 }
 
int main()
{
  
}