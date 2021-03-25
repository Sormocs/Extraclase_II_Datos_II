#pragma once
#include "Observer.cpp"
#include <list>
#include <string>

class Car : public Observed{
private:
    std::list<Observer *> observers;
    std::string message;
public:
    virtual ~Car();
    void Attach(Observer *observer) override;
    void Detach(Observer *observer) override;
    void Notify() override;
    void SetMSG(std::string message);
    void ShowObservers();
    void StartEngine();
};


class Person: public Observer{
private:
    std::string in_msg;
    Car &car;
    static int s_num;
    int num;
public:
    Person(Car &car);
    virtual ~Person();
    void Update(const std::string &message) override;
    void RemoveSelf();
    void Info();

};



