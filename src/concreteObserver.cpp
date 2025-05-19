#include "concreteObserver.h"
#include <iostream>

ConcreteObserver::ConcreteObserver(const std::string& name, WeatherData* subject)
    : name(name), subject(subject) {}

void ConcreteObserver::update() {
    std::cout << "Observer " << name << " received update: "
              << "Temp = " << subject->getTemperature()
              << ", Humidity = " << subject->getHumidity()
              << ", Pressure = " << subject->getPressure() << std::endl;
}

std::string ConcreteObserver::getName() const {
    return name;
}
