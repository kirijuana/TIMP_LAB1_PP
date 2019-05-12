#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"

using namespace std;

namespace simple_shapes {
	// Вывод параметров круга в поток
	void Out(Circle &t, ofstream &ofst)
	{
		ofst << "It is Circle: x = "
			<< t.x << "y = " << t.y << ", R = " << t.R << ", Colour = " << t.colour << endl;
	}
} // end simple_shapes namespace