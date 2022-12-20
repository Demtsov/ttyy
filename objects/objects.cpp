#include "objects.h"

Objects::Objects()
{
}
bool AbstractCar::drive(int kilometres)

{
    fuel_loss = (double)rashod * ((double)kilometres / 100.0);

    if (fuel_n >= fuel_loss)
    {
        distation += kilometres;
        fuel_p = fuel_n;
        fuel_n -= fuel_loss;
        return true;
    }
    else
    {
        fuel_p = -1;
        return false;
    }
}

void AbstractCar::refuel()
{
    fuel_n = bak;
}

void AbstractCar::printStatus() {
    if (fuel_p < fuel_loss)
    {
        cout << "Nikuda ne edem" << endl;
    }
    else {
        cout << "Obschii probeg: " << distation << endl;
        cout << "Ostavsheesia v bake toplivo: " << fuel_n << endl;
    }
}
void Route::addPoint(const RoutePoint &point)
{
    RoutePoints.push_back(point);
}

void Route::run(IVehicle *vehicle)
{

    vehicle->refuel();
    while (vehicle_counter < RoutePoints.size() - 1)
    {
        if (RoutePoints.size() > 1)
        {

            kilometres = sqrt(pow((RoutePoints[vehicle_counter + 1].xKm - RoutePoints[vehicle_counter].xKm), 2.0) +
                    pow((RoutePoints[vehicle_counter + 1].yKm - RoutePoints[vehicle_counter].yKm), 2.0));

            if (vehicle->drive(kilometres))
            {
                vehicle->printStatus();
                vehicle_counter++;
                cout << "Zapravlyau" << endl;
                vehicle->refuel();
            }
        }
        else
        {
            cout << ("Nedostatochno tochek marshruta");
        }
    }
    vehicle_counter = 0;
    cout << endl;
}
