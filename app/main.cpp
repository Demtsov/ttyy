#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include "C:\Users\DanPo\Documents\labs9\objects\objects.h"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        Route routes;
        ifstream fin;
        fin.open(argv[1]);
        int xkm, ykm;
        string name;
        RoutePoint point;
        if (!fin.is_open())
        {
            cout << "file not otkrit";
        }
        else
        {
            cout << "file otkrit";
        }

       while (fin >> xkm >> ykm >> name)
        {
           point.xKm = xkm;
            point.yKm = ykm;
            point.name = name;
            routes.addPoint(point);
        }
       IVehicle *vehicles[4] = { new Sedan, new Suv, new Bus, new Bicycle};
        for (int i = 0; i < 4; i++)
        {
            routes.run(vehicles[i]);
            delete vehicles[i];
        }
        fin.close();
    }
    else
    {
        cout << "OSHIBKA";
    }
  return 0; }
