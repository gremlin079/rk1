#include "weatherData.h"

void WeatherData::registerObserver(Observer* o) {
    observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o) {
    for (auto it = observers.begin(); it != observers.end(); ++it) {
        if (*it == o) {
            observers.erase(it);
            break;
        }
    }
}

void WeatherData::notifyObservers() {
    for (Observer* observer : observers) {
        observer->update();
    }
}

void WeatherData::setMeasurements(float temp, float hum, float press) {
    temperature = temp;
    humidity = hum;
    pressure = press;
    notifyObservers();
}

float WeatherData::getTemperature() const {
    return temperature;
}

float WeatherData::getHumidity() const {
    return humidity;
}

float WeatherData::getPressure() const {
    return pressure;
}
