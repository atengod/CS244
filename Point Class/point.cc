//Point class implementation	   
//Point.cc


Point::Point(double init_x, double init_y)
{
   x = init_x;
   y = init_y;
}

void Point::shift(double dx, double dy)
{
   x += dx;
   y += dy;
}

double Point::get_x() const
{
return x;
}

double Point::get_y() const
{
return y;
}
void Point::reset(double init_x, double init_y)
{

  if(init_x < 120 || init_y < 120 ){
   x = init_x;
   y = init_y;
}

}


void Point::setYtoX()
{
   y = x;

}
void Point::setXtoY()
{
    x = y;

}
