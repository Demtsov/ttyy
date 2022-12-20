#ifndef OBJECTS_H
#define OBJECTS_H
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;
class Objects
{
public:
    Objects();
};

class IVehicle {

public:

    virtual bool drive(int kilometres) = 0;
    virtual void refuel() = 0;
    virtual void printStatus() = 0;
};class Bicycle : public IVehicle{
protected:
    float mileage = 0;
public:
    ~Bicycle();

    bool drive(float kilometers);

    void refuel(){};

    void printStatus(){};

};

struct RoutePoint
{
    RoutePoint() {}
    RoutePoint(int x, int y, string Name) { xKm = x; yKm = y; name = Name; }
    int xKm;
    int yKm;
    string name;
};

class AbstractCar : public IVehicle {

protected:

    double fuel_n;
    int distation;
    double fuel_loss;
    double bak;
    int rashod;
    double fuel_p;

public:

    AbstractCar()
    {
        distation = 0;
        fuel_loss = 0.0;
        fuel_n = 0;
        fuel_p = 0;
    }

    bool drive(int kilometres);

    void refuel();

    void printStatus();


};

class Route {

public:

    int vehicle_counter;
    int kilometres;

    Route() { kilometres = 0; vehicle_counter = 0; }

    vector <RoutePoint> RoutePoints = {};

    void addPoint(const RoutePoint& point);

    void run(IVehicle* vehicle);

};


class Sedan : public AbstractCar {
public:
    Sedan();
       ~Sedan();
       Sedan(double a, double b);
       double getFuelLevel();
       double getMilage();
};

class Suv : public AbstractCar {
public:
    Suv();
       ~Suv();
};

class Bus : public AbstractCar {
public:
    Bus();
       ~Bus();
};



#endif // OBJECTS_H
