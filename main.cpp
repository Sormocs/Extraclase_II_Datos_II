#include <iostream>
#include "Car.h"

int main() {

    std::cout << "Patron Observer\n" << "~~~~~~~~~~" << std::endl;
    Car *car = new Car();
    Person *p1 = new Person(*car);
    Person *p2 = new Person(*car);
    Person *p3 = new Person(*car);

    car->ShowObservers();
    std::cout << "\nNotifies about engine\n" << std::endl;
    car->StartEngine();
    p1->RemoveSelf();
    car->ShowObservers();
    p2->RemoveSelf();
    p3->RemoveSelf();

    std::cout << "~~~~~~~~~~" << std::endl;

    return 0;
}
