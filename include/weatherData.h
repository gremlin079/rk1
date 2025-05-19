#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "subject.h"

class WeatherData : public Subject {
private:
    float temperature;
    float humidity;
    float pressure;

public:
    void setMeasurements(float temp, float hum, float press);
    float getTemperature() const;
    float getHumidity() const;
    float getPressure() const;
    void registerObserver(Observer* o) override;
    void removeObserver(Observer* o) override;
    void notifyObservers() override;
};

#endif // WEATHERDATA_H
