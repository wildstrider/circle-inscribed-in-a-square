#include "square.h"
#include <cmath>

void square::RecalculatePSsquare()
{
	S = pow(a, 2);
	P = a * 4;
}
void square::displaySquare()
{
	cout << "Square ";
	display();
	cout << "a = " << a << endl;
}
