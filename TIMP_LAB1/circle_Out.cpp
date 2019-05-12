#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Вывод параметров круга в поток
	void Out(circle &C, ofstream &ofst)
	{
		ofst << "It is Circle: x = "
			<< C.x << ", y = " << C.y << ", R = " << C.R << ", Colour = " << C.colour <<  endl;
	}
} // end simple_shapes namespace