TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

CONFIG(debug, debug|release){
    LIBS += -L../Objects/debug -lObjects
}
CONFIG(release, debug|release){
    LIBS += -L../Objects/release -lObjects
}

SOURCES += \
        main.cpp
