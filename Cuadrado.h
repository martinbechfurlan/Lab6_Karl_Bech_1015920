#pragma once
#include "FiguraGeometrica.h"
class Cuadrado :
    public FiguraGeometrica
{
public:
    Cuadrado() {};
    ~Cuadrado() {};
    double GetArea() override;
    double GetPerimeter() override;
};

