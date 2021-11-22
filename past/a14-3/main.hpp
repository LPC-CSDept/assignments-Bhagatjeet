
#define MAIN_H
#include <iostream>
using namespace std;

class Square {
  private:
        int width;
  public:
         Square();
         void setWidth(double);
         int getWidth(void) const;
         int getArea(void) const;
         friend class Rect;      
};

 Square::Square() {
  width = 20;
}

void Square::setWidth(double w) {
  width = w;
}

int Square::getWidth(void) const{
  return width;
}

int Square::getArea(void) const{
  return width*width;
}

class Rect
{
  private:
     double width;
     double height;
  public:
     Rect();
     void setWidth(double);
     void setHeight(double);
     double getWidth(void) const;
     double getHeight(void) const;
     double getArea(void) const;
     Rect makeRectangleWithSquare(Square s);
};

Rect::Rect(){
   width = height = 20;
}

void Rect::setWidth(double w){
  width = w;
}

void Rect::setHeight(double h){
  height = h;
}

double Rect::getWidth(void) const{
  return width;
}

double Rect::getHeight(void) const{
  return height;
}

double Rect::getArea(void) const{
  return width*height;
}

Rect Rect::makeRectangleWithSquare(Square s) {
  Rect r;
  r.setWidth(s.width);
  r.setHeight(s.width);
  return r;
}