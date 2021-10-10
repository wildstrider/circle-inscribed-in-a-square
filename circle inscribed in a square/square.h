#pragma once
#include "Figures.h"

class square : Figures
{
protected:
	double a; //длинна стороны
public:
	square(double a, string name) :a{ a }
	{
		this->name = name;
		cornerCount = 4;
		RecalculatePSsquare();
	}
	void set_a(double a) { this-> a = a; RecalculatePSsquare(); }
	void RecalculatePSsquare();
	void displaySquare();
};

