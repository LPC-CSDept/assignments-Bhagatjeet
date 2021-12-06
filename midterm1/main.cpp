  #include<iostream>
  #include"Numbers.hpp"
  using namespace std;
  int main()
  {
    srand(time(0));
    Numbers x1(112, 14);
    srand(time(0));
    Numbers x2(478, 6);
    cout << "Object1:";
    printNumbers(x1);
    printNumbers(x2);
    if(x1 > x2)
    cout << "\nObject 1 numbers are greater than Object 2";
    else 
    cout << "\nObject 2 numbers are greater than Object 1";
    return 0;
  }