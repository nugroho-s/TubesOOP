#include "Point.h"
Point::Point() { 
               x=0; y=0; 
 }
Point::Point (int _X, int _Y) { 
             x = _X; y = _Y;
 }
int Point::getX () { return x;}
int Point::getY () { return y;}

void Point::set(int _x, int _y) {
	x = _x;
	y = _y;
}

void Point::move (int dx, int dy) {
  x = x + dx;
  y = y + dy;
  }

