#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include "Observer.h"
#include "WeatherData.h"
#include <string>

class ConcreteObserver : public Observer {
private:
    std::string name;
    WeatherData* subject;

public:
    ConcreteObserver(const std::string& name, WeatherData* subject);
    void update() override;
    std::string getName() const;
};

#endif // CONCRETE_OBSERVER_H
