//
// Created by lujim on 25/3/2021.
//

#ifndef EXTRACLASE_DATOSII_II_DIRECTOR_H
#define EXTRACLASE_DATOSII_II_DIRECTOR_H

#include "Builder.h"

class Director {

private:
    Builder* builder;

public:
    Director(bool defaultBuilder = false);

    Director(Builder* builder);

    void SetBuilder(Builder* builder);

    void ResetBuilder();

    void BuildSideFeaturedPlane();

    void BuildFullPlane();

    void ShowPlane();
};


#endif //EXTRACLASE_DATOSII_II_DIRECTOR_H
