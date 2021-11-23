#ifndef NUMBERS_H
#define NUMBERS_H
using namespace std;

class Numbers
{
  private:
  int i;

  public:
  Numbers()
  {
    i = 0;
  }

Numbers(int l)
{
  i = l;
}

friend std::ostream &operator<<(ostream &out, const Numbers &d)
{
  out<< " i = " << d.i;
  return out;
}

friend std::istream &operator>>(istream &input, Numbers &d)
{
  input >> d.i;
  return input;
}
};
#endif