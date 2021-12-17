#ifndef EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee{
  protected:
    string name;
    int number;
    string hiredate;
  public:
    Employee();
    Employee(string name, int id, string hired);
    string getname();
    int getid();
    string gethired(); 
    void setname(string name);
    void setid(int id);
    void sethired(string hired);
    friend class product;// friend class  
};
#endif