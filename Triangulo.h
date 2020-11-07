#pragma once
#include "FiguraGeometrica.h"
class Triangulo :
    public FiguraGeometrica
{
public:
    Triangulo() {};
    ~Triangulo() {};
    double GetArea() override;
    double GetPerimeter() override;
};

