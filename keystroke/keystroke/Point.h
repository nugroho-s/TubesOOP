#ifndef _POINT_H
#define _POINT_H
class Point {
      public:
          Point ();
          Point (int _X, int _Y);
          int getX();
          int getY();
          void move (int dx, int dy);
      private:
         int x;
         int y;
};
#endif
