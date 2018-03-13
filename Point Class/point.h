//Point class declaration
//Point.h


class Point
{
private:
   double x;
   double y;
public:
   Point();
   Point(double init_x, double init_y);
   void shift(double dx, double dy);
   double get_x() const;
   double get_y() const;
   void reset(double init_x, double init_y);
   void setYtoX();
   void setXtoY();
};
