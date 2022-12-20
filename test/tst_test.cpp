#include <QtTest>
#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include "C:\Users\DanPo\Documents\labs9\objects\objects.h"
// add necessary includes here

class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void test_case1();

};

test::test()
{

}

test::~test()
{

}

void test::test_case1()
{

}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
