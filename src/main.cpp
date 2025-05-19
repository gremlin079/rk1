#include "WeatherData.h"
#include "ConcreteObserver.h"

int main() {
    WeatherData weatherData;
    ConcreteObserver observer1("Observer1", &weatherData);
    ConcreteObserver observer2("Observer2", &weatherData);

    weatherData.registerObserver(&observer1);
    weatherData.registerObserver(&observer2);

    weatherData.setMeasurements(25.0f, 65.0f, 1013.0f);
    weatherData.setMeasurements(26.0f, 70.0f, 1012.0f);

    return 0;
}
