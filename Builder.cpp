//
// Created by lujim on 25/3/2021.
//

#include "Builder.h"


Builder::Builder() {
    this->Reset();
}

Builder::~Builder() {
    delete plane;
}

void Builder::Reset() {
    this->plane = new Plane();
}

void Builder::ProduceAirframe() const {
    plane->parts[0] = "Airframe ";
}

void Builder::ProduceEngines() const {
    plane->parts[1] = "Engines ";
}

void Builder::ProduceSurfaceControlAreas() const {
    plane->parts[2] = "Surface_Control_Areas ";
}

void Builder::ProduceInsideDecorations() const {
    plane->parts[3] = "Inside_Decoration ";
}

void Builder::ProduceLandingGear() const {
    plane->parts[4] = "Landing_Gear ";
}

void Builder::Painting() const {
    plane->parts[5] = "Painting ";
}

Plane *Builder::GetPlane() {
    return this->plane;
}
