#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include "subject.h"
#include "observer.h"
#include <vector>

class WeatherData : Subject
{
    std::vector<Observer> observers;
public:
    void  registerObserver(Observer o);
    void  removeObserver(Observer o);
    void  notifyObservers();
};

#endif // WEATHERDATA_H
