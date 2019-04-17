#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Вывод параметров круга в поток
	void Out(circle &t, ofstream &ofst)
	{
		ofst << "It is Circle: x = "
			<< t.a << ", R = " << t.b << ", Colour = " << t.colour << endl;
	}
} // end simple_shapes namespace