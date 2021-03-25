//
// Created by lujim on 25/3/2021.
//

#include "Director.h"

void Director::SetBuilder(Builder *builder) {
    this->builder = builder;
}

void Director::BuildSideFeaturedPlane() {
    this->builder->ProduceAirframe();
    this->builder->ProduceEngines();
    this->builder->ProduceLandingGear();
}

void Director::BuildFullPlane() {
    this->builder->ProduceAirframe();
    this->builder->ProduceEngines();
    this->builder->ProduceSurfaceControlAreas();
    this->builder->ProduceInsideDecorations();
    this->builder->ProduceLandingGear();
    this->builder->Painting();
}

Director::Director(Builder *builder) {
    this->builder=builder;
}

Director::Director(bool defaultBuilder) {
    if (defaultBuilder) {
        this->builder = new Builder();
    }
}

void Director::ShowPlane() {
    this->builder->GetPlane()->ListParts();
}

void Director::ResetBuilder() {
    this->builder->Reset();
}
