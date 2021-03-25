#include <iostream>
#include "Car.h"

Car::~Car() noexcept {
   std::cout << "Car observed destroyed" << std::endl;
}

void Car::Attach(Observer *observer) {
    this->observers.push_back(observer);
}

void Car::Detach(Observer *observer) {
    this->observers.remove(observer);
}

void Car::Notify() {
    std::list<Observer *>::iterator iterator = this->observers.begin();
    //ShowObservers();
    while (iterator != observers.end()){
        (*iterator)->Update(message);
        ++iterator;
    }
}

void Car::SetMSG(std::string message = "Empty") {
    this->message = message;
    Notify();
}

void Car::ShowObservers() {
    std::cout << this->observers.size() << " persons observing" << std::endl;
}

void Car::StartEngine() {
    this->message = "Engine started";
    Notify();
    std::cout << "Notified engine has been started" << std::endl;
}

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
int Person::s_num = 0;

Person::Person(Car &car) : car(car){
    this->car.Attach(this);
    std::cout << "I'm person number " << ++Person::s_num << std::endl;
    this->num = Person::s_num;
}

Person::~Person() noexcept {
    std::cout << "Observer "<< this->num << "has left" << std::endl;
}

void Person::Update(const std::string &in_msg) {
    this->in_msg = in_msg;
    this->Info();
}

void Person::RemoveSelf() {
    car.Detach(this);
    std::cout << "Observer " << this->num << " stopped watching" << std::endl;
}

void Person::Info() {
    std::cout << "Person #" << this->num << " says: I've observed" << std::endl;
}
