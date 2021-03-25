#include <iostream>
#include "Car.h"
#include "Director.h"

void Observer();

void BuilderShow();

int main() {

    Observer();

    BuilderShow();

    return 0;
}

void Observer(){
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
}

void BuilderShow(){
    Director* director = new Director(true);

    cout << "\n\nSide featured plane: \n";

    director->BuildSideFeaturedPlane();
    director->ShowPlane();

    director->ResetBuilder();

    cout << "\n\nFull plane: \n";

    director->BuildFullPlane();
    director->ShowPlane();

    delete director;
}