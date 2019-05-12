#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров пр€моугольника из файла
	void In(rectangle &R, ifstream &ifst) {
		ifst >> R.x >> R.y >> R.colour;
	}
} // end simple_shapes namespace