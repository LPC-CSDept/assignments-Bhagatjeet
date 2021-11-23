#ifndef NUMBERS_H
#define NUMBERS_H

class Numbers
{
  private:
  int size;
  int* numbers;

  public:
  Numbers();

  Numbers(int s);
  Numbers(const Numbers& n);
  ~Numbers();

  int operator>(const Numbers& n);

  Numbers operator=(const Numbers& n);
  Numbers operator+(const Numbers& n);

  friend void printNumbers(const Numbers& n);

};
#endif