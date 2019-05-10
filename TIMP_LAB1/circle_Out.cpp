#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Вывод параметров круга в поток
	void Out(circle &c, ofstream &ofst)
	{
		ofst << "It is Circle: x = "
			<< c.x << ", y = " << c.y << ", R = " << c.R << ", Colour = " << c.colour <<  endl;
	}
} // end simple_shapes namespace