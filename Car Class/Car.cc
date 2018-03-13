//Car class implementation	   
//Car.cc

Car::Car()
{
center_x = 0;
center_y = 0;
}

Car::Car(double x, double y, double r)
{
center_x = x;
center_y = y;
}

void Car::setCenter(double dx, double dy)
{
center_x = dx;
center_y = dy;
}

