#include <iostream>
#include "weatherData.h"

int main() {
    WeatherData station;
    Observer display;
    
    station.registerObserver(display);
    std::cout << "Observer registered successfully!" << std::endl;
    
    return 0;
}
