#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"

using namespace std;

namespace simple_shapes {
	// Вывод параметров прямоугольника в поток
	void Out(rectangle &r, ofstream &ofst) {
		ofst << "It is Rectangle: x = " << r.x
			<< ", y = " << r.y << ", Colour = " << r.colour << endl;
	}
} // end simple_shapes namespace