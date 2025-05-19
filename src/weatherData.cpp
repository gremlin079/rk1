#include "weatherData.h"

void WeatherData::registerObserver(Observer o) {
    observers.push_back(o);
}

void WeatherData::removeObserver(Observer o) {

}

void WeatherData::notifyObservers() {

}
