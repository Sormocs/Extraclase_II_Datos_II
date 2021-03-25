#include <iostream>

class Observer {
public:
    virtual ~Observer(){};
    virtual void Update(const std::string &message) = 0;
};

class Observed{
public:
    virtual ~Observed() {};
    virtual void Attach(Observer *observer) = 0;
    virtual void Detach(Observer *observer) = 0;
    virtual void Notify() = 0;
};