#include <iostream>

class Engine
{
  public:
    Engine();
    ~Engine();
    virtual void Predict()=0;
};
 
Engine::Engine()
{
 
}
 
Engine::~Engine()
{
 
}
 
class ObjectsCommon
{
  public:
    void setWidth(double width);
    void setLength(double length);
 
    double getWidth();
    double getLength();
    ObjectsCommon();
    ~ObjectsCommon();
 
  private:
    double _width;
    double _length;
};
 
ObjectsCommon::ObjectsCommon()
{
  _width = 0.0;
  _length = 0.0;
}
 
ObjectsCommon::~ObjectsCommon()
{
 
}
 
void ObjectsCommon::setWidth(double width)
{
  _width = width;
}
 
double ObjectsCommon::getWidth()
{
  return _width;
}
 
void ObjectsCommon::setLength(double length)
{
  _length = length;
}
 
double ObjectsCommon::getLength()
{
  return _length;
}
 
 
class Vehicle : public ObjectsCommon, virtual public Engine
{
  public:
    void setNumDoors(uint8_t num_doors);
    unsigned int getNumDoors();
    void Predict() override;
    Vehicle();
    ~Vehicle();
 
  private:
    unsigned int _num_doors;
};
 
Vehicle::Vehicle()
{
    _num_doors = 0; 
}
 
Vehicle::~Vehicle()
{
 
}
 
void Vehicle::setNumDoors(uint8_t num_doors)
{
  _num_doors = num_doors;
}
 
unsigned int Vehicle::getNumDoors()
{
  return _num_doors;
}
 
void Vehicle::Predict() 
{
  std::cout << "Vehicle Predict()" << std::endl;
}
 
class Cyclist : public ObjectsCommon , virtual public Engine
{
  public:
    void setWearingHelmet(bool data);
    bool getWearingHelmet();
    void Predict() override;
    Cyclist();
    ~Cyclist();
 
  private:
    bool _is_wearing_helmet;
};
 
void Cyclist::setWearingHelmet(bool data)
{
  _is_wearing_helmet = data;
}
 
bool Cyclist::getWearingHelmet()
{
  return _is_wearing_helmet;
}
 
Cyclist::Cyclist()
{
 
}
 
Cyclist::~Cyclist()
{
 
}
 
void Cyclist::Predict()
{
  std::cout << "Cyclist Predict()" << std::endl;
}

