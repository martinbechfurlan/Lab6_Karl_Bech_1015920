#pragma once
class FiguraGeometrica
{
public:
	double width;
	double height;
	double lado3;
	int type;
	double area;
	double perimeter;

	FiguraGeometrica() { width = 0; height = 0; type = 0; area = 0; perimeter = 0; lado3 = 0; };
	~FiguraGeometrica() {};
	virtual double GetArea();
	virtual double GetPerimeter();
};

