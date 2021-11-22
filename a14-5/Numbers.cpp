#include "Numbers.hpp"
#include <iostream>
using namespace std;

Numbers::Numbers()
{
  size = 5;
  numbers = new int[size];

  for(int i = 0; i<size; i++)
  {
    numbers[i] = rand() % 100;
  }  
}

Numbers::Numbers(int s)
{
  size = 10;
  numbers = new int[size];

  for(int i = 0; i<size; i++)
  {
    numbers[i] = rand() % 100;
  }
}

Numbers::Numbers(const Numbers& n)
{
  size = n.size;
  numbers = new int[size];

  for(int i = 0; i<size; i++)
  {
    numbers[i] = n.numbers[i];
  }
}

Numbers::~Numbers()
{
  size = 0;
  delete[] numbers;
}

int Numbers::operator>(const Numbers&n)
{
  int s1 = 0, s2 = 0;
  for(int i = 0; i<size; i++)
  {
    s1+= numbers[i];
  }

  for(int i = 0; i<n.size; i++)
  {
    s2+= n.numbers[i];
  }
  return s1>s2 ? 1 : 0;
}

Numbers Numbers::operator=(const Numbers& n)
{
  size = n.size;
  numbers = new int[size];

  for(int i = 0; i<size; i++)
  {
    numbers[i] = n.numbers[i];
  }
  return *this;
}

Numbers Numbers::operator+(const Numbers& n)
{
  Numbers* s = this;
  for(int i = 0; i<size; i++)
  {
    if(i<n.size)
    {
      s->numbers[i] += n.numbers[i];  
    }
  }
  if(s->size >= n.size)
  {
    return *s;
  }

  else{
    Numbers* temp = s;
    s->numbers = new int[n.size];
    s->size = n.size;

    int i;
    for(i = 0; i<temp->size; i++)
    {
      s[i] = temp->numbers[i];
    }
    for(int j = i; j<s->size; j++)
    {
      s->numbers[j] = n.numbers[j];
    }
    return *s;
  }
}

void printNumbers(const Numbers& n)
{
  for(int i = 0; i<n.size; i++)
  {
    cout << n.numbers[i] << " ";
  }
  cout << endl;
};