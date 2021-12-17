#include <iostream>
#include "production.hpp"
using namespace std;

void Production :: setshift(int shift){
  shift = shift;
};
void Production :: setpay(double money){
  hourly = money;
};
int Production :: getshift(){
  return shift;
};
double Production :: getpay(){
  return hourly;
};