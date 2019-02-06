#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров пр€моугольника из файла
	void In(rectangle &r, ifstream &ifst) {
		ifst >> r.x >> r.y;
	}
} // end simple_shapes namespace