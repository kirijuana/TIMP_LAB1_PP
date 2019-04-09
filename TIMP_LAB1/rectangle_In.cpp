#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"
#include <iostream>;
using namespace std;
namespace simple_shapes {
	// ¬вод параметров пр€моугольника из файла
	void In(rectangle &r, ifstream &ifst) {
		if (r.x <= 0 || r.y <= 0)
			cout << "Incorrect rectangle value";
		ifst >> r.x >> r.y >> r.colour;
	}
} // end simple_shapes namespace