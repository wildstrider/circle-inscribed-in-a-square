#include <iostream>
using namespace std;

#include "square.h"
#include "Circle.h"
#include "Figures.h"
#include "circle_inscribed_square.h"

int main()
{
	// квадрат
	square squ(5, "Black");
	squ.displaySquare();
	cout << endl;
	//круг
	Circle circle(6, "O");
	circle.displayCircle();
	cout << endl;
	//круг вписанный в квадрат
	circle_inscribed_square cir_squ(5, 2, "name");
	cir_squ.displayCirinSqu();

	return 0;
}