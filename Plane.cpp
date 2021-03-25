//
// Created by lujim on 25/3/2021.
//

#include "Plane.h"

void Plane::ListParts() const {
    cout << "Plane parts: ";
    for (int i = 0; i < 6; i++){
        cout << parts[i];
    }
    cout << endl;
}
