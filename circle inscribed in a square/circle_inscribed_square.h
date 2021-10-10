#pragma once
#include "Circle.h"
#include "square.h"
class circle_inscribed_square : Circle, square
{
public:
	circle_inscribed_square(double a, double R, string name):Circle(R,name),square(a,name) 
	{
	 if(a/2 < R)
	 {
		 setR(a/2);
		 recalculatePS();
	 }
	}
	void displayCirinSqu();
};

