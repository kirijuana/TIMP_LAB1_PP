#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"

using namespace std;

namespace simple_shapes {
	// Вывод параметров прямоугольника в поток
	void Out(rectangle &R, ofstream &ofst) {
		ofst << "It is Rectangle: x = " << R.x
			<< ", y = " << R.y << ", Colour = " << R.colour << endl;
	}
} // end simple_shapes namespace