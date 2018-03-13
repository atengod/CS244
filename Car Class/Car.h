//Car class declaration
//Car.h

class Car
{
private:
  int yearModel;
  string make;
  int speed;	
public:
  Car(int year, string makee);
  void brake();
  void accelerate();
  void setSpeed(int sp);
  int getSpeed();
  void setMake(string makee);
  string getMake();
  void setyearModel(int year);
  int getyearModel();
};
 
