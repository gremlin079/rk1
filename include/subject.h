#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include "observer.h"

class Subject {
protected:
    std::vector<Observer*> observers;

public:
    virtual void registerObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notifyObservers() = 0;
    virtual ~Subject() = default;
};

#endif // SUBJECT_H
