#include "Triangulo.h"

double Triangulo::GetArea() {
	return (width * height)/2;
}

double Triangulo::GetPerimeter() {
	return width + height + lado3;
}