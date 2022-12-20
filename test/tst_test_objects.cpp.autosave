#include <QtTest>
#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include "C:\Users\DanPo\Documents\labs9\objects\objects.h"
// add necessary includes here

class test_objects : public QObject
{
    Q_OBJECT

public:
    test_objects();
    ~test_objects();

private slots:
    void test_case1();
    void test_bicycle();
        void test_route();
};

test_objects::test_objects()
{

}

test_objects::~test_objects()
{

}

void test_objects::test_case1()
{ Sedan sedan;
    QVERIFY(!sedan.drive(100));
    QCOMPARE(sedan.getFuelLevel(), 0.0);
    sedan.refuel();
    QCOMPARE(sedan.getFuelLevel(),50.0);
    QVERIFY(sedan.drive(100));
    QCOMPARE(sedan.getMilage(),100);
    QCOMPARE(sedan.getFuelLevel(),43.0);
    QVERIFY(!sedan.drive(500));
    QCOMPARE(sedan.getMilage(), 250);
    QCOMPARE(sedan.getFuelLevel(),32.5);
    sedan.refuel();
    QCOMPARE(sedan.getFuelLevel(),50);
    QVERIFY(sedan.drive(500));
    QCOMPARE(sedan.getFuelLevel(),15.0);

}
void test_objects::test_bicycle()
{
    Bicycle bike;
    QVERIFY(bike.drive(1000));
    QVERIFY(bike.get_mileage() == 1000);
}

void test_objects::test_route()
{
    Route route;
    RoutePoint rp_1 = RoutePoint(0,0, "Point_1");
    RoutePoint rp_2 = RoutePoint(0,100, "Point_2");

    route.addPoint(rp_1);
    route.addPoint(rp_2);

    Sedan *sedan = new Sedan(50, 8.5);
    sedan->refuel();
    route.run(sedan);
    QVERIFY(sedan->getMilage() == 10);

}


QTEST_APPLESS_MAIN(test_objects)

#include "tst_test_objects.moc"
