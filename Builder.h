//
// Created by lujim on 25/3/2021.
//

#ifndef EXTRACLASE_DATOSII_II_BUILDER_H
#define EXTRACLASE_DATOSII_II_BUILDER_H

#include "Plane.h"

class BuilderFrame {
public:
    virtual ~BuilderFrame() = default;

    virtual void ProduceAirframe() const = 0;

    virtual void ProduceEngines() const = 0;

    virtual void ProduceSurfaceControlAreas() const = 0;

    virtual void ProduceInsideDecorations() const = 0;

    virtual void ProduceLandingGear() const = 0;

    virtual void Painting() const = 0;
};

class Builder : public BuilderFrame{
private:
    Plane* plane;

public:
    Builder();

    ~Builder();

    void Reset();

    void ProduceAirframe() const override;

    void ProduceEngines() const override;

    void ProduceSurfaceControlAreas() const override;

    void ProduceInsideDecorations() const override;

    void ProduceLandingGear() const override;

    void Painting() const override;

    Plane* GetPlane();
};

#endif //EXTRACLASE_DATOSII_II_BUILDER_H
