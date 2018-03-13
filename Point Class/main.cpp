#include <iostream>
#include "point.h"
#include "point.cc"
using namespace std;

int main()
{
   Point p1(-1.0,0.8);
   Point p2(p1.get_x(),p1.get_y());

   cout << p1.get_x() << " , " << p1.get_y() << endl;

   cout << p2.get_x() << " , " << p2.get_y()<< endl;

   p2.shift(1.3,-1.4);
   cout << p2.get_x() << " , " << p2.get_y()<< endl;

   p2.reset(-3.2,5.8);
   cout << p2.get_x() << " , " << p2.get_y()<< endl;

   p2.setXtoY();
   cout << p2.get_x() << " , " << p2.get_y()<< endl;

   p2.reset(-3.2,6.6);
   cout << p2.get_x() << " , " << p2.get_y()<< endl;


   p2.setYtoX();
   cout << p2.get_x() << " , " << p2.get_y()<< endl;

return 0;
}
