//Car class declaration
//Car.h

class Car
{
private:
  int yearModel;
  string make;
  double speed;	
public:
  Car();
  Car(int year, string make);
  void brake();
  void accelerate();
  double getSpeed() const;
  void setSpeed(double);
  void setMake(string make);
  string getMake();
  void setyearModel(int year);
  int getyearModel();
};
 
